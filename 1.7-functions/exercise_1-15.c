#include <stdio.h>

/* print F to C table
   for F = 0, 20, ..., 300
   Now featuring a dedicated conversion function
*/

int fahr_to_cel(int fahr) {
    int celsius = 5 * (fahr-32) / 9;
    return celsius;
}

int main() {
    int lower = 0;
    int upper = 300;
    int step = 20;

    for (int fahr = lower; fahr <= upper; fahr+=step) {
        printf("%d\t%d\n", fahr, fahr_to_cel(fahr));
    }
}
