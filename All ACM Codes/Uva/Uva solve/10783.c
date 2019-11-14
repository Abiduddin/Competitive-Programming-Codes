#include <stdio.h>

int main()
{
    int t,a,b,i,j,k;
    scanf("%d",&t);
    if(t>=0&&t<=100)
    {
    for(k=1;k<=t;k++)
    {
        j=0;
        scanf("%d%d",&a,&b);
        if(a>=0&&a<=100&&b>=0&&b<=100)
        {
        for(i=a;i<=b;i++)
        {
            if(i%2!=0)
                j+=i;
        }
        printf("Case %d: %d\n",k,j);
    }
    }
    }
    return 0;
}
