#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    long int a;
    int t;
    register int i,j;
    double f;

    scanf("%d",&t);
    if(t>=1&&t<=5000)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%ld",&a);
            f=0;
            if(a>=1&&a<=1000000000)
            {
                if(a>180000)
                {
                  a-=180000;
                  if(a<=300000)
                    f=a*.1;
                  else if(a<=700000)
                    f=300000*.1+(a-300000)*.15;
                  else if(a<=1000000)
                    f=300000*.1+400000*.15+(a-700000)*.2;
                  else if(a>1000000)
                    f=300000*.1+400000*.15+300000*.2+(a-1000000)*.25;

                 if(f<2000)
                    f=2000;
                }
                a=ceil(f);
                printf("Case %d: %ld\n",i,a);
            }
        }
    }
    return 0;

}
