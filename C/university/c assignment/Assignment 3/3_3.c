#include<stdio.h>

int main()
{
    int n, d, r, sum=0;

    scanf("%d", &n);

    while(n)
    {
        r=n%10;
        d=n/10;
        sum += r;
        n=d;
    }

    printf("%d\n", sum);

    return 0;
}
