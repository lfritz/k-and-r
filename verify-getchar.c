#include <stdio.h>

/* verify that getchar() != EOF is 0 or 1 */
main() {
    int result;

    result = 1;
    while (result) {
        result = (getchar() != EOF);
        printf("%d\n", result);
    }
}
