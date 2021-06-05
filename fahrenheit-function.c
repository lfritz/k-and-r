#include <stdio.h>

#define LOWER 0     /* lower limit of temperature table */
#define UPPER 300   /* upper limit */
#define STEP  20    /* step size */

double celcius(double fahr);

/* exercise 1-15: print Fahrenheit-Celcius table
   for fahr = 300, 280, ..., 0 using a function */
main() {
    float fahr;
    int lower, upper, step;

    printf("fahr  celcius\n");
    fahr = UPPER;
    while (fahr >= LOWER) {
        printf("%3.0f%10.1f\n", fahr, celcius(fahr));
        fahr = fahr - STEP;
    }
}

double celcius(double fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}
