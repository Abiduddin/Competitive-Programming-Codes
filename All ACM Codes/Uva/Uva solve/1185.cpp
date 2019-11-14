#include <stdio.h>
#include <math.h>
int main()
{
    register int i;
    int j,k,t;
    double n;

    scanf("%d",&t);

    while(t--)
    {
    scanf("%d",&j);
    n=0;
    for(i=2;i<=j;i++)
    {
        n=n+log10(i);
    }

    k=floor(n);
    k++;
    printf("%d\n",k);

    }
    return 0;
}
