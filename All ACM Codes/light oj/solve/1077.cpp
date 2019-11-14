#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,m,n=0,p,r;

    scanf("%d",&m);

    while(m--)
    {
        scanf("%lld%lld%lld%lld",&i,&j,&k,&l);

        p=__gcd(labs(i-k),labs(j-l))+1;
        printf("Case %lld: %lld\n",++n,p);


    }


    return 0;
}
