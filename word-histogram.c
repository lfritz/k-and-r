#include <stdio.h>

#define IN  1
#define OUT 0
#define MAXLEN 20

/* exercise 1-13 print a histogram of the lengths of words */
main() {
    int lens[MAXLEN+1];
    int c, state, len, i, j;

    /* count word lengths */
    for (i = 0; i <= MAXLEN; ++i)
        lens[i] = 0;
    state = OUT;
    len = 0;
    do {
        c = getchar();
        if (c == ' ' || c == '\n' || c == '\t' || c == EOF) {
            if (state == IN) {
                if (len > MAXLEN)
                    len = MAXLEN;
                ++lens[len];
                len = 0;
            }
            state = OUT;
        } else {
            state = IN;
            ++len;
        }
    } while (c != EOF);

    /* print horizontal histogram */
    for (i = 0; i <= MAXLEN; ++i) {
        printf("%3d ", i);
        for (j = 0; j < lens[i]; ++j)
            putchar('O');
        putchar('\n');
    }
}
