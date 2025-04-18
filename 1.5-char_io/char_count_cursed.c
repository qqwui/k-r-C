#include <stdio.h>

// count characters in input; v1
int main()
{
  double nc; // use a double precision float to represent extremely large numbers

  nc = 0;
  // a for loop is technically a while loop`
  for (nc = 0; getchar() != EOF; ++nc)
    ; // so apparently you can do this
  printf("%.0f\n", nc);
}
