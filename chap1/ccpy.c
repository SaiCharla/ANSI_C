#include <stdio.h>

/*copy input to out put*/

main()
{
    int c;

    printf("%d", EOF);
    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}

