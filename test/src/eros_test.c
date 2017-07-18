/*
Copyright (c) 2016-2017 Lucas Gabriel Sánchez

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

#include "eros_test.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define INITIAL_STATUS 65000
static int failed = INITIAL_STATUS;

void fail(const char* format, ...)
{
  va_list args;
  va_start(args, format);
  printf("    ERROR: ");
  vprintf(format, args);
  va_end(args);

  failed += 1;
}

void test(const char* name, eros_test t)
{
  failed = INITIAL_STATUS;
  printf("%s\n", name);
  t();
  int total = failed - INITIAL_STATUS;
  if (total != 0) {
    printf("%d test%s failed\n", total, total == 1 ? "" : "s");
    exit(failed);
  }
}

int main(int argc, char** argv)
{
  printf("\nPerforming tests...\n");

  test("lexer", test_lexer);
  //TODO add more tests here

  printf("All tests are ok\n");
  return 0;
}