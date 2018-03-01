#include <stdio.h>

#define IN 1 
#define OUT 0

/* Count words, lines and characters in the input*/


main()
{
    int c, nl, nc, nw, state=OUT;
    
    nl = nc = nw = 0;

    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("NO. of words: %d\nNo. of lines: %d\nNo. of chars: %d\n", \
            nw, nl, nc);
}


