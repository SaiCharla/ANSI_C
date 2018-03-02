#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Farhenheit-Celcious table
 * for fahr = 0, 20, ...., 300*/
float fc(float);

main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, fc(fahr));
}


float fc(float fahr)
{
    return (5.0/9.0)*(fahr-32);
}
