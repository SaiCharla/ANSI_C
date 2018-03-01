#include <stdio.h>

/*count lines in input*/

main()
{
    int c, nb=0, nt=0, nl=0;
     
    while ((c = getchar()) != EOF){

        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++nb;
    }

    printf("No. blanks: %d\n\
No. tabs:%d\n\
No. lines:%d\n", nb, nt, nl);
}

