#include <stdio.h>

main()
{
    int c, d=0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (d != ' '){
                putchar('\n');
            }
        }
        else
            putchar(c);
        d = c;
    }
}

