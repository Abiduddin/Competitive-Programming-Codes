#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    //int i,k,l,t,m;
    long long j,t;

    while(scanf("%lld",&t)!=EOF)
    {
        j=((t*(t+1))/2)*((t*(t+1))/2);
        printf("%lld\n",j);
    }

    return 0;
}

