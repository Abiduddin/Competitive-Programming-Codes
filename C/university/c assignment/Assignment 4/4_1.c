#include<stdio.h>
int main()
{
    int bin[100], i, n, d, r, c;

    scanf("%d", &n);
    c = 0;

    while(n)
    {
        d=n/2;
        r=n%2;
        c++;
        bin[c]=r;
        n=d;
    }

    for(i=c; i>=1; i--)
        printf("%d", bin[i]);

    return 0;
}
