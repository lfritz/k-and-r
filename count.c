#include <stdio.h>

/* exercise 1-8: count blanks, tabs, and newlines */
main() {
    int blanks, tabs, newlines;
    int c;

    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++newlines;
    }

    printf("Blanks:   %5d\n", blanks);
    printf("Tabs:     %5d\n", tabs);
    printf("Newlines: %5d\n", newlines);
}
