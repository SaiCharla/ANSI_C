#include <stdio.h>
#define L 15

/* prints the histogram of word lengths*/

main()
{
    int c, d=0, wl=0, i, j;
    int nw[L];

    for (i = 0; i < L; ++i)
        nw[i] = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            ++nw[wl];
            wl = 0;
        }
        else
            ++wl;
        d = c;
    }

    for (i = 0; i < L; ++i){
        if (nw[i] != 0){
            printf("\n%d: ", i);
            for (j = 0; j < nw[i]; ++j)
                printf("-");
        }
    }
    printf("\n");
}

