#include <stdio.h>

int main()
{
   // freopen("aa.txt","r",stdin);
  //  freopen("aa1.txt","w",stdout);
    long long a,b,c,d,e,f;
    int i,t;

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        c=a;
        d=0;
        f=0;

        while(c>=b)
        {
            e=c/b;
            f=c%b;
            c=e+f;
            d=d+e;
        }



        printf("%lld\n",d+a);
    }

    return 0;
}
