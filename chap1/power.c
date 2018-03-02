#include <stdio.h>

int power(int m, int n);

main()
{
    int i;
    for (i = 0; i < 10; ++i)
        printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));
}


int power(int m, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * m;
    return p;
}

