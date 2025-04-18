#include <stdio.h>

// copy input to output; v2
int main()
{
  int c; // delare as int instead of char in order to hold the value of EOF

  // for some incredibly cursed reason, variable assignments return the value assigned
  while ((c = getchar()) != EOF)
    putchar(c);
}
