#include <stdio.h>

/* print Fahrenheit-Celsius table */
main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) 
    /* there are three parts to this: initialization, the test or condition, and the increment step*/
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}