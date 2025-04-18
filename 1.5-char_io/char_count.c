#include <stdio.h>

// count characters in input; v1
int main()
{
  long nc; // use at least 32bit int

  nc = 0;
  while (getchar() != EOF)
    ++nc; // you can use both prefix and postfix (nc++)
  printf("%ld\n", nc);
}
