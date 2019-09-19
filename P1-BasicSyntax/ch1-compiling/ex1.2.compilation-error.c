/* Things don't always go so smoothly. In this exercise, you will see what
happens when you try to compile a program with mistakes in the source code.

Task
===========

1. In C, every line of code (we call them statements) must end with
a semicolon ";". Missing a semicolon is one of the most typical mistakes
made by C programmers... it happens more than you think and yes, this little
mistake will make your entire program non-executable.

Remove any semicolon from the source code, compile it and see what happens.
Read the error message displayed by the compiler.

[Reminder]
Code can be compiled by executing the following line in the Terminal:
    gcc ex1.2.compilation-error.c -o ex1.2.compilation-error

2. Fix the mistake and compile the code again to make sure that everything
works as expected.

3. Introduce any other error to your code. For example, remove one of the
curly braces "{" or add an extra character in the end of your code.
Compile your program and read the error messages.

(Remember that compiler is your friend)
*/

#include <stdio.h>

int main() {
  printf("Hello, world!\n");
  return 0;
}
