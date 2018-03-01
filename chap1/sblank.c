#include <stdio.h>

/*copy input to out put*/

main()
{
    int c, d;

    /*printf("%d", EOF);*/
    while ((c=getchar()) != EOF){
        if (d != ' ')
            putchar(c);
        d = c;
    }
}

