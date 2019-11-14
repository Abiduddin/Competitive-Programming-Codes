#include<stdio.h>
#include <math.h>

int main()
{
    //freopen("aa.txt","r",stdin);
   // freopen("aa1.txt","w",stdout);
    register long long p;
    long long r,s,m;
    int t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%lld",&s);
        if(s<1)
        {
            printf("0\n");
            continue;
        }


        m=sqrt(s);
        r=s;
        for(p=2;p<=m;p++)
        {

            r=r+s/p;
        }
        r=2*r-m*m;

        printf("%lld\n",r);

    }

    return 0;
}
