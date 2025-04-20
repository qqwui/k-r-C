#include <stdio.h>
#define MAXLINE 1000

// my_getline: reads a line into a buffer s, returns length of line
// this is basically just gets() except it keeps the new line character
// the original was just called "getline", but that's a libc function now
int my_getline(char s[], int lim) {
    int c;
    int i; // i needs to be in the scope of the whole function

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }

    // the for loop terminates on a new line or an EOF
    // if its a new line we need to add it to the buffer
    if (c == '\n') {
        s[i] = c;
        i++;
    }

    s[i] = '\0'; // null terminate the string
    return i;
}

// copy: copies from a buffer "from" to another buffer "to"
// this is basically just a dumb version of strcpy()
void copy(char to[], char from[]) {
    // this is actually my creation, the original was a little more sane
    for (int i = 0; (to[i] = from[i]) != '\0'; i++);
}

int main() {
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = my_getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }

    }

    // if there actually were any lines...
    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}
