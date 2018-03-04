#include <stdio.h>

#define MAXLINE 1000    /*Maximum input line size*/
#define TABSTOPS 8      /*Tabstops*/

int dtab(char s[], int len);

main()
{
    int len;
    char line[MAXLINE];
    len = dtab(line, MAXLINE);
    printf("%s\nLenght=%d\n", line, len);
    return 0;
}

int dtab(char s[], int len)
    /*takes in the typed strings replaces tabs with spaces with spaces
     * and returns the original line lenght*/
{
    int i, c, j;
    for (i=0; i < len-2 && (c=getchar())!=EOF && c!='\n'; ++i){
        if (c == '\t'){
            for (j=0; j < TABSTOPS; ++j){
                s[i+j] = '.';
            }
            i = i+j-1;
        }
        else
            s[i] = c;
    }
    if (c == '\n'){
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}



