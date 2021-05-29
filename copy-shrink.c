#include <stdio.h>

/* exercise 1-9: copy input to output, replacing each sequence of blanks
   with a single blank */
main() {
    int c, previous;
    previous = EOF;
    while ((c = getchar()) != EOF) {
        if (previous == ' ' && c == ' ')
            continue;
        putchar(c);
        previous = c;
    }
}
