#include <stdio.h>

// replaces multiple spaces in a row with one space
// for this exercise I'm counting a "blank" as a space character

int main() {
    int c;

    int spaces_seen = 0; // this could definitely be optimised by using booleans, but that's not a native type in c

    c = getchar();
    while (c != EOF) {
        if (c == ' ') {
            if (spaces_seen == 0) {
                putchar(c);
            }
            spaces_seen++;
        } else {
            putchar(c);
            spaces_seen = 0;
        }
        
        c = getchar();
    }
}
