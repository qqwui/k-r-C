#include <stdio.h>

// count digits, white space, and other characters

int main() {
    int c, i, whitespaces, others;
    int digits[10];

    whitespaces = others = 0;
    for (i = 0; i < 10; i++)
        digits[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++digits[c-'0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            whitespaces++;
        } else {
            others++;
        }
    }

    printf("digits:\n");
    for (i = 0; i < 10; i++) {
        printf("%ds: %d\n", i, digits[i]);
    }
    
    printf("whitespaces: %d\nother: %d\n", whitespaces, others);
}
