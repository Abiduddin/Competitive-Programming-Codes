#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,k,l,m,n=0,p,r;

    scanf("%d",&m);

    while(m--)
    {
        scanf("%lld%lld%lld%lld",&i,&j,&k,&l);

        if((i+j)>(k+l))
        {
            p=i;
            r=j;
            i=k;
            j=l;
            k=p;
            l=r;
        }
        if(i==j&&k==l)
        {
        p=abs(k-i)+1;

        }
        else if(i==k)
        {
            p=abs(l-j)+1;
        }
        else if(j==l)
        {
            p=abs(k-i)+1;
        }
        else
            p=2;
        printf("Case %lld: %lld\n",++n,p);


    }


    return 0;
}
