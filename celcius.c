#include <stdio.h>

/* exercise 1-4: print Celcius-Fahrenheit table
   for celcius = -20, 0, ..., 200 */
main() {
    float fahr, celcius;
    int lower, upper, step;

    lower = -20;    /* lower limit of temperature table */
    upper = 200;  /* upper limit */
    step = 20;    /* step size */

    printf("celcius  fahr\n");
    celcius = lower;
    while (celcius <= upper) {
        fahr = celcius * (9.0 / 5.0) + 32.0;
        printf("%3.0f%10.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
