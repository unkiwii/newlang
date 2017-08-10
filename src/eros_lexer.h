/*
Copyright (c) 2014-2017 Lucas Gabriel Sánchez

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef EROS_LEXER_H
#define EROS_LEXER_H

#include "eros_source.h"
#include "eros_defines.h"

struct eros_lexer_t
{
  /** source to lex, can be a file or string **/
  eros_source_t* source;

  /** current position in the source **/
  source_position_t current_position;
  source_position_t end_position;

  /** current character read **/
  char current_char;
};

eros_lexer_t* eros_lexer_new(eros_source_t* source);

void eros_lexer_delete(eros_lexer_t*);

eros_token_t* eros_lexer_next_token(eros_lexer_t*);

#endif // EROS_LEXER_H
