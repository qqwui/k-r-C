#include <stdio.h>

/* print F to C table
   for F = 0, 20, ..., 300*/

int main() // the int part isn't in the original book, but
           // is needed to compile successfully
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius); // %d: substitution for an integer
                                       // \t: tab character
    fahr = fahr + step;
  }
}
