#include <stdio.h>

/* print F to C table
   for F = 0, 20, ..., 300*/

int main() // the int part isn't in the original book, but is needed to compile successfully
{
  // use floats instead of ints for more precision
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower; // implicit conversion from int to float
  
while (fahr <= upper) { // upper is converted to float before comparison

    celsius = (5.0/9.0) * (fahr-32.0); // adding .0 to a literal indicates it's a float

    printf("%3.0f %6.1f\n", fahr, celsius); // %d: substitution for an integer
                                       // \t: tab character
    fahr = fahr + step;
  }
}
