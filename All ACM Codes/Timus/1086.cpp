#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    int i,j,k,l,a[15500],n;

    a[1]=2;

    for(i=2,j=3;i<=15050;j++)
    {
        l=1;
        if(j%2==0)
            continue;
        else
        {
            for(k=3;k<=sqrt(j);k++)
                if(j%k==0)
            {
                l=0;
                break;
            }
            if(l)
                a[i++]=j;
        }
    }

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&i);
        printf("%d\n",a[i]);
    }

    return 0;

}
