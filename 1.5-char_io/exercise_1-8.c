#include <stdio.h>

// counts the number of white space chars from stdin

int main()
{
  int c;
  int whitespace_chars = 0;

  c = getchar();
  while (c != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      nl++;
    }
    c = getchar();
  }
  printf("%d\n", nl);
}
