/* To understand what is happening inside your program, you need to get
some form of output. The easiest way to do that is to print values to the
Terminal. In this exercise, you will learn to use the "printf" function
from the standard library. We will only cover the most important
features of the "printf" function that will be useful for you in this course.
But we strongly encourage you to go on the Internet and read more about
different flags and specifications of this wonderful function.

Task
===========

1. The easienst way to use the "printf" function is to give it a string
of text that you want to be printed. You have already seen this in previous
exercises.

  printf("Hello, world!\n");
  printf("My message\n");

Add a line to the code in the bottom of this file that prints your name
to the Terminal.

2. You already know that \n is a newline character. It is a special symbol
that can be inserted anywhere in your string to mark the beginning of a new
line. There are many other special characters that can be used in strings.
The most important ones that you need to know are:

  \n - newline
  \t - tabulation

and just for fun, you can try the \a character - it will make a "bip" sound :)

Print your name and age in the following format using only one "printf"
statement:

Name: Dennis Ritchie
Age:  70

(note: there is a tabulation after "Name:" and "Age:")

3. printf allows us to print strings that accept one or more parameters.
This is a very important feature because it allows us to print the result
of a computation. For example:

  printf("Two plus two equals: %d\n", 2 + 2);

or a value held by a variable:

  char* name = "Oleksandr";
  printf("My name is %s\n", name);

You can add as many parameters as you want:

  int a = 3;
  int b = 5;
  printf("%d + %d = %d\n", a, b, a + b);

TODO: Finish this
*/

#include <stdio.h>

int main() {
  // Write your code here

  return 0;
}
