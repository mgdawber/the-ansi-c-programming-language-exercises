#include <stdio.h>

/* print Fahrenheit-Celsius table */
/* for fahr = 0, 20, ..., 300; floating-point version */

/* Exercise 1-4. Write a program to print the corresponding Celsius
   to Fahrenheit table. */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius / (5.0/9.0)) + 32.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    celsius = celsius + step;
  }
}
