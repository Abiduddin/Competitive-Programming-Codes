#include <stdio.h>


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i,j,k;
    long int l,m,n,o,p,a[510];

    //p=0;
    //k=0;
    for(k=1;k<510;k++)
    {
        p=0;
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
        {
            if(i==0) l=j;
            else if(j==0) l==i;
            else
            {
                m=i;
                n=j;
                while(n!=0)
                {
                    o=n;
                    n=m%n;
                    m=o;
                }
                l=m;
                    //printf("%ld\n",l);
            }
            p=p+l;

            }
            a[k]=p;

    }
    while(scanf("%ld",&k))
    {
        if(k==0)
            break;
        else
        {

            printf("%ld\n",a[k]);
        }
    }
    return 0;
}
