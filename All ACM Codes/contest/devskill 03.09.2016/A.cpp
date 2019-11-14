#include <stdio.h>



int main()
{
    register int k,l=0;
    long long i,j;

    scanf("%d",&k);
    while(k--)
    {
        scanf("%lld %lld",&i,&j);
        i=i*2;
        i=i*i-j*j;
        printf("Case %lld: %lld\n",++l,i);
    }

}
