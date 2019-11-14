#include <stdio.h>


int main()
{
    //freopen("aa.txt","r",stdin);
   // freopen("aa1.txt","w",stdout);
    long int i,j,k,l,m,n,o,p;

    while(scanf("%ld",&k))
    {
        if(k==0)
            break;
        else
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
            printf("%ld\n",p);
        }
    }
    return 0;
}
