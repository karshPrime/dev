
/* Print.c
 *
 *
 */

#include "Print.h"
#include "Debug.h"

//- Helper Functions -------------------------------------------------------------------------------

void print_description( const char *aFlag, const char *aDescription )
{
    printf( "%s    --%-22s %s%s%s\n",
            TERM_GREEN, aFlag, TERM_GRAY, aDescription, TERM_RESET );
}

void print_command( const char *aCmd, const char *aFlags, const char *aDescription )
{
    printf( "%s\n\nUSAGE:\n   %s$ %sdev %s%s %s%s%s\n",
            aDescription, TERM_BLUE, TERM_RED, TERM_YELLOW, aCmd, TERM_BLUE, aFlags, TERM_RESET );
}


//- External Calls ---------------------------------------------------------------------------------

void print_version( void )
{
    printf( "Version: %s\n", CURRENT_VERSION );
}

void print_help( Commands aSpecific )
{
    debug( "print help" );

    switch ( aSpecific )
    {
        case NONE:
            break;

        case RUN:
            print_command( "run", "{Args}", "Run programme with optional args" );
            printf( "\nFLAGS:\n" );
            print_description( "global", "Override local config with global settings" );
            break;

        case COMPILE:
            print_command( "compile", "{Flags}", "Compile programme with optional flags" );
            printf( "\nFLAGS:\n" );
            print_description( "global", "Override local config with global settings" );
            break;

        case BUN:
            print_command( "bun", "", "Build and run programme" );
            printf( "\nFLAGS:\n" );
            print_description( "flags [Flags]", "Specify build flags" );
            print_description( "args [Args]", "Specify run args" );
            print_description( "global", "Override local config with global settings" );
            break;

        case INIT:
            print_command( "init", "[ProjectName] [Language]", "Initialise a new project." );
            printf( "\nFLAGS:\n" );
            print_description( "here", "Create project in current directory" );
            print_description( "licence [Title]", "Specify licence to use" );
            print_description( "no-git", "Omit Git initialisation" );
            print_description( "git-ignore [Args]", "Add to Git ignore list" );
            print_description( "git-ignore-only [Args]", "Create Git ignore list with specified args" );
            print_description( "template [Templates]", "Add template code to project" );
            print_description( "ignore-template", "Omit template code" );
            break;

        case TEMPLATE:
            print_command( "template", "{Args}", "Manage template files for projects." );
            printf( "\nFLAGS:\n" );
            print_description( "list", "List available templates" );
            print_description( "add [Templates]", "Add template code to project" );
            print_description( "new [Title]", "Create new template file" );
            print_description( "manage", "Manage the record of all saved templates" );
            print_description( "print-dir", "Show template directory" );
            break;

        case CLEAN:
            print_command( "clean", "", "Clean build files" );
            printf( "\nFLAGS:\n" );
            print_description( "global", "Override local config with global settings" );
            break;

        case TEST:
            print_command( "test", "", "Run test files" );
            printf( "\nFLAGS:\n" );
            print_description( "global", "Override local config with global settings" );
            break;

        case DEBUG:
            print_command( "debug", "", "Run project debugger" );
            printf( "\nFLAGS:\n" );
            print_description( "global", "Override local config with global settings" );
            break;

        case LICENSE:
            print_command( "licence", "{Args}", "Manage licences for projects." );
            printf( "\nFLAGS:\n" );
            print_description( "list", "List available licences" );
            print_description( "replace [Title]", "Replace current licence" );
            print_description( "new [Title]", "Create new licence file" );
            print_description( "print-dir", "Show licence directory" );
            break;

        case CONFIG:
            print_command( "config", "", "Manage configuration files for the dev utility." );
            printf( "\nFLAGS:\n" );
            print_description( "local", "Edit or create local config file" );
            break;

        case HELP:
            print_command( "help", "", "Display help menu" );
            break;

        case VERSION:
            print_command( "version", "", "Display utility version" );
            break;
    }
}

