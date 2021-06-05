#include <stdio.h>

#define FIRST_CHAR ' '
#define LAST_CHAR '~'
#define CHARACTERS (LAST_CHAR - FIRST_CHAR + 1)

/* exercise 1-14 print a histogram of character frequencies */
main() {
    int count[CHARACTERS];
    int c, i, j, line;

    /* count characters */
    for (i = 0; i < CHARACTERS; ++i)
        count[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c >= FIRST_CHAR && c <= LAST_CHAR)
            ++count[c - FIRST_CHAR];
    }

    /* print vertical histogram */
    line = 0;
    for (i = 0; i < CHARACTERS; ++i)
        if (count[i] > line)
            line = i;
    for (i = line; i > 0; --i) {
        for (j = FIRST_CHAR; j <= LAST_CHAR; ++j)
            if (count[j - FIRST_CHAR] >= i)
                putchar('O');
            else
                putchar(' ');
        putchar('\n');
    }
    for (i = FIRST_CHAR; i <= LAST_CHAR; ++i)
        putchar(i);
    putchar('\n');
}
