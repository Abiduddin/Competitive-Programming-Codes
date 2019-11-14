#include <stdio.h>

long long int aa[1000000];
int main()
{
//    freopen("aa.txt","r",stdin);
    freopen("aa1.txt","w",stdout);
    long long int n,i,j,k,caseno=0,cases,m,l;

    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%lld%lld%lld%lld%lld%lld",&aa[0],&aa[1],&aa[2],&aa[3],&aa[4],&aa[5],&n);
        for(i=6;i<=n;i++)
            aa[i]=(aa[i-1]+aa[i-2]+aa[i-3]+aa[i-4]+aa[i-5]+aa[i-6])%10000007;

        printf("Case %lld: %lld\n",++caseno,aa[n]%10000007);
    }
    return 0;
}
