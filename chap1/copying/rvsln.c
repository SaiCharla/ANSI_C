#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char line[], int maxline);

main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0){
        reverse(line, len);
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

void reverse(char s[], int len)
{
    int i;
    char r[len];

    for (i=len-2; i>=0 ; --i){
        r[len-2-i] = s[i];     
    }
    r[len-1] = '\n';
    r[len] = '\0';
    /*s = r;*/
    for (i=0; i<len; ++i)
        s[i] = r[i];
}





