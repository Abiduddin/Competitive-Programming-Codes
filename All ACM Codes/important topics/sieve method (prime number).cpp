#include <stdio.h>

int main()
{
    int a[10000],i,j,k,l,m,n;

    while(scanf("%d",&n)!=EOF)
    {
    for(i=0;i<=n;i++)
        a[i]=1;

    a[0]=0;  /// o not prime
    a[1]=0;  /// 1 not prime

    for(i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                k=i*j;
                a[k]=0;
            }
        }
    }
    printf("\n");
    printf("Prime numbers: ");
    for(i=0;i<=n;i++)
    {
        if(a[i]==1)
            printf("%d ",i);
    }
    printf("\n");
}
return 0;
}
