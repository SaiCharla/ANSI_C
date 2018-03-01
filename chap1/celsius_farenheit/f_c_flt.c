#include <stdio.h>

/* print Farhenheit-Celcious table
 * for fahr = 0, 20, ...., 300*/
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /*lower limit of the temperature table */
    upper = 300;    /*upper limit*/
    step = 20;  /*step size*/

    fahr = lower;
    printf("Farenheit\tCelsius\n");
    while (fahr <= upper){
        celsius = 5.0/9.0 * (fahr-32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

