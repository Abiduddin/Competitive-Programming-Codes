#include <stdio.h>


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    int i,k,l,t,m;
    long long j;

    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
            scanf("%d",&k);
            j=0;
            while(k--)
            {
               scanf("%d %d %d",&i,&l,&m);
               j=j+(i*m);
            }
            printf("%lld\n",j);
        }
    }

    return 0;
}

