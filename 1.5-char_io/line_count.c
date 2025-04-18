#include <stdio.h>

// count lines in input; v1
// gonna try just writing code in the proper style
int main()
{
  int c, nl;

  nl = 0;
  c = getchar();
  while (c != EOF) {
    if (c == '\n') {
      nl++;
    }
    c = getchar();
  }
  printf("%d\n", nl);
}
