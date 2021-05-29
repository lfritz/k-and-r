#include <stdio.h>

#define LOWER 0     /* lower limit of temperature table */
#define UPPER 300   /* upper limit */
#define STEP  20    /* step size */

/* print Fahrenheit-Celcius table
   for fahr = 300, 280, ..., 0 */
main() {
    float fahr, celcius;
    int lower, upper, step;

    printf("fahr  celcius\n");
    fahr = UPPER;
    while (fahr >= LOWER) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f%10.1f\n", fahr, celcius);
        fahr = fahr - STEP;
    }
}
