/* This exercise was taken from https://www.hackerrank.com

Task
===========

Given a string, s, consisting of letters and digits, find the frequency
of each digit in the given string.

Example input 1
===============

  a11472o5t6

Example output 1
================

  0 2 1 0 1 1 1 1 0 0

Explanation
================
In the given string:

  - 1 occurs two times.
  - 2, 4, 5, 6, and 7 occur one time each.
  - The remaining digits 0, 3, 8, and 9 don't occur at all.

Example input 2
===============

  1v88886l256338ar0ekk

Example output 2
================

  1 1 1 2 0 1 2 0 5 0

Implementation notes
====================

To get the length of a string, you can use the strlen function from the
string.h library.

  char* s = "Hello";
  int len = strlen(s); // 5

You can convert an integer to string using the sprintf funclion:

  char number_string[10];
  int number = 234452;
  sprintf(number_string, "%d", number);

To convert a single digit to char, you can add '0' to it, which is a
character in the ASCII table:

  char digit_char = 9 + '0';
*/

#include <stdio.h>
#include <string.h>

int main() {
  // Write your code here

  return 0;
}
