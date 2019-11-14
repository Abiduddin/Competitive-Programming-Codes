#include <stdio.h>


int main()
{
    int i,j,k,n,ans;

    i=0;
    ans=0;

    scanf("%d",&n);

    while(i!=n)
    {
        i++;
        ans=ans+i*(n-i+1);
    }
    printf("%d\n",ans);
    return 0;
}
