/*     DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2004

Copyright (C) 2016 Lucas Gabriel Sanchez <unkiwii@gmail.com>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.

           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

0. You just DO WHAT THE FUCK YOU WANT TO.  */

#include "eros_input.h"
#include "eros_compile.h"
#include "eros_repl.h"

int main(int argc, char** argv)
{
  eros_input* input = eros_input_new(argc, argv);

  int exit_code = 0;
  if (input->compile_flag) {
    exit_code = eros_compile(input);
  } else {
    exit_code = eros_repl(input);
  }

  eros_input_del(input);

  return exit_code;
}