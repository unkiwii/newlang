/*     DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2004

Copyright (C) 2016 Lucas Gabriel Sanchez <unkiwii@gmail.com>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.

           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

0. You just DO WHAT THE FUCK YOU WANT TO.   */

#ifndef EROS_REPL_CMDS_H
#define EROS_REPL_CMDS_H

// the '_()' at the end is neccesary to be compatible with GCC and Clang
#define CMD(NAME) eros_repl_cmd_ ## NAME ## _

#include "eros_context.h"

void CMD(help)();
void CMD(exit)(eros_context_t*);
void CMD(license)();

#endif // EROS_REPL_CMDS_H
