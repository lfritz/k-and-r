#include <stdio.h>

#define IN  1
#define OUT 0

/* exercise 1-12 print input one word per line. */
main() {
    int c, state;

    state = OUT;
    do {
        c = getchar();
        if (c == ' ' || c == '\n' || c == '\t' || c == EOF) {
            if (state == IN)
                printf("\n");
            state = OUT;
        } else {
            state = IN;
            putchar(c);
        }
    } while (c != EOF);
}
