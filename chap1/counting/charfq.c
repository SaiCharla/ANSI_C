#include <stdio.h>
#define L 128

/* prints the histogram of word lengths*/

main()
{
    int c, i, j;
    int cr[L];

    for (i = 0; i < L; ++i)
        cr[i] = 0;

    while ((c = getchar()) != EOF)
        ++cr[c];

    for (i = 0; i < L; ++i){
        if (cr[i] !=0){
            printf("\n%c: ", i);
            for (j = 0; j < cr[i]; ++j)
                printf("-");
        }
    }
    printf("\n");
}

