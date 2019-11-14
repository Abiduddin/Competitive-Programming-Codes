#include <stdio.h>


int main()
{
    long long i,j,k,l,m,n;


    scanf("%lld",&i);
    while(i--)
    {
        scanf("%lld",&j);
        m=0;
        n=0;
        l=0;
        while(j>0)
        {
            m=m+1;
            if(m>(j-1))
            {
                m=m-1;
                printf("%lld %lld %lld\n",m,n,j);
                j=0;
            }

            n=n+m;
            j=j-1-m;
            if(j==0)
                printf("%lld %lld %lld\n",m,n,l);

        }

    }
}
