/* Variables and types */

#include <stdio.h>

int main()
{
  /* To declare a variable, we must provide
     its data type and name: */
  int age;

  /* We initialize a variable by assigning
     a value to it: */
  age = 23;

  /* We define a variable by declaring and
     initializing it. This can be done separately
     (as in the example above) or with a single
     statement: */
  float temperature = 36.6;

  /* Variables of a same type can be declared
     or defined in a single line: */
  int x, y;              // declaration of x and y
  x = 100;               // initialization of x
  y = 200;               // initialization of y
  char a = 'A', b = 'B'; // definition of a and b

  /* Now we can used the variables we defined.
     Let's print their values: */
  printf("Age: %d\n", age);
  printf("Temperature: %.1f\n", temperature);
  printf("x: %d\n", x);
  printf("y: %d\n", y);
  printf("a: %c\n", a);
  printf("b: %c\n", b);

  /* After compiling and executing this program,
     you will see the following output:
        Age: 23
        Temperature: 36.6
        x: 100
        y: 200
        a: A
        b: B */

  return 0;
}
