#include <stdio.h>

int main()
{
    long long i,t=0,tm,j,k,l,m,n;

    while(scanf("%lld",&i)!=EOF)
    {
    while(i--)
    {
        scanf("%lld%lld",&n,&m);
        tm=0;
        for(j=0;j<n;j++){
            scanf("%lld",&k);
            tm=tm+k;

        }

        for(j=0;j<m;j++){
            scanf("%lld",&l);
         tm=tm+l;
        }
        //printf("l=%d k=%d tm=%d\n",l,k,tm);
        k=tm-k;
        l=tm-l;
        //printf("l=%d k=%d\n",l,k);
        if(k<l)
            printf("Case %lld: %lld\n",++t,k);
        else
            printf("Case %lld: %lld\n",++t,l);


    }
    }

}
