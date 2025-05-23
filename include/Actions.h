
/* Actions.h
 * Actions supported by the utility, such as to compile/run/bun/clean etc.
 * This code takes the user arguments and runs the defined commands with it
 */

#pragma once

#include "Config.h"

//- Declarations -----------------------------------------------------------------------------------

void action_bun( const bool, char *[], char *[] );
void action_run( const bool, char *[] );
void action_test( const bool );
void action_clean( const bool );
void action_debug( const bool );
void action_config( const bool );
void action_compile( const bool, char *[] );

