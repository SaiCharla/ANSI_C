#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void rmtrail(char line[], int maxline);

main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0){
        rmtrail(line, MAXLINE);
        printf("%s", line);
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i=0; (i < lim-1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void rmtrail(char s[], int len)
{
    int i;

    for (i=len-2; i>=0 ; --i){
        if ((s[i] != ' ') || (s[i] != '\t'))
            break;
        else
            s[i] = '\0';
    }
}




