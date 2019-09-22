/*
Task
===========

Your task is to divide the given two numbers and print the quotient
and remainder of this division.

Example input 1
===============

Numerator: 2500
Denominator: 235

Example output 1
================

Quotient: 10
Remainder: 150
*/

#include <stdio.h>

int main() {
  int numerator, denominator;

  printf("Numerator: ");
  scanf("%d", &numerator);

  printf("Denominator: ");
  scanf("%d", &denominator);

  // Write your code here

  printf("Quotient: %d\n", numerator / denominator);
  printf("Remainder: %d\n", numerator % denominator);

  return 0;
}
