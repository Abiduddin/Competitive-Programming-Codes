#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    long int i,j,k,l,n,m,a[400020],p,o=0,q,r;

    while(scanf("%ld",&n)!=EOF)
    {
        p=1000010;
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);

        scanf("%ld",&m);
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            {
                if(((a[i]+a[j])==m))
                {
                    if(a[i]>=a[j])
                    {
                    o=a[i]-a[j];
                    if(o<p)
                    {
                        p=o;
                        q=a[j];
                        r=a[i];
                    }
                    }
                    else
                    {
                        o=a[j]-a[i];
                    if(o<p)
                    {
                        p=o;
                        q=a[i];
                        r=a[j];
                    }
                    }

                }
            }
        printf("Peter should buy books whose prices are %ld and %ld.\n\n",q,r);

    }
    return 0;
}
