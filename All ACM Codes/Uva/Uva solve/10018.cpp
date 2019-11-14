#include <stdio.h>

int main()
{
    long long a,b,c;
    int i,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&a);


        i=0;
        while(1)
        {
            c=a;
            b=0;
            while(c!=0)
            {
                b=b*10+c%10;
                c=c/10;
            }

            if(a==b)
            {
                printf("%d %lld\n",i,b);
                break;
            }
            i++;

            a=a+b;


        }
    }
    return 0;
}
