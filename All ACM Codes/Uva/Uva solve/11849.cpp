#include <stdio.h>

long long a[1000100];
int main()
{
    register long long i;
    long long j,m,n,k,l,num;

    while(scanf("%lld%lld",&n,&m))
    {
        num=0;
        if(n==0&&m==0)
            break;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
            l=0;
        while(m--)
        {
            scanf("%lld",&k);

//            if(k<a[l])
//                l=0;
            for(i=l;i<n;i++)
            {

                if(k==a[i])
                {
                    num++;
                     l=i;
                    break;
                }
                if(k<a[i])
                    break;
            }

        }
        printf("%lld\n",num);
    }

    return 0;
}
