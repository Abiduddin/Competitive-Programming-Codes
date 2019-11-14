#include <stdio.h>

int main()
{
    long long i,j,k,l=0,m,p;

    while(scanf("%lld",&m)!=EOF)
    {
        l=0;
        while(m--)
        {
            scanf("%lld%lld",&i,&j);
            if(i)
            {
                k=(j*3)/2;
                printf("Case %lld:\n%lld\n%lld\n%lld\n",++l,k,j*2,k+k+k);
            }
            else
            {
                k=j/3;
                p=(k+k)/3;
                printf("Case %lld:\n%lld\n%lld\n%lld\n",++l,k,p+p,p);
            }

        }
    }
}
