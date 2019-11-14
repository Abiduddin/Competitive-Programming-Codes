#include<stdio.h>

int main()
{
    int i,j,k,l;
    double n,r,nr;

    scanf("%d%d",&l,&k);
    j=l-k;
    n=1;
    r=1;
    nr=1;

    for(i=2;i<=l;i++)
        n=n*i;

    for(i=2;i<=k;i++)
        r=r*i;

    for(i=2;i<=j;i++)
        nr=nr*i;

    n=n/(r*nr);

    printf("%.0lf\n",n);

    return 0;
}
