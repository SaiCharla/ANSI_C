#include <stdio.h>

/*copy input to out put*/

main()
{
    int c, d;

    /*printf("%d", EOF);*/
    c = getchar();
    while (c != EOF){
        if (d != ' ')
            putchar(c);
        d = c;
        c = getchar();
    }
}

