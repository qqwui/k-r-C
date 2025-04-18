#include <stdio.h>

// copy input to output; v1
int main()
{
  int c; // delare as int instead of char in order to hold the value of EOF

  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
