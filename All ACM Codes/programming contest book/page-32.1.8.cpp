#include <stdio.h>

int main()
{
    int n,sum,i,j,k,l;


    scanf("%d",&n);
    sum=0;
    for(i=1,j=0;i<=n;i++,j++)
    {
        sum=sum+(i*(n-j));
        //printf("%d  %d\n",i,(n-j));
    }
    printf("%d\n",sum);
}
