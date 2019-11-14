#include<stdio.h>

int main()
{
    int i, n, p1, p2, x;
    scanf("%d", &n);

    p1=0;
    p2=1;

    for(i=0; i<=n; i++)
    {
        if(i==n)
        printf("%d\n", p1);
        x=p1;
        p1=p2;
        p2 += x;
    }

    return 0;
}
