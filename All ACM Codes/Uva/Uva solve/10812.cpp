#include <stdio.h>
#include <math.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    long int  i,j,k,n,m,l;
    unsigned long p,r;
    scanf("%ld",&n);

    while(n--)
    {
        scanf("%ld%ld",&k,&l);
        m=0;
        if(l>k)
            printf("impossible\n");
        else if(l==0)
        {
            if(k%2!=0)
                printf("impossible\n");
            else
                printf("%ld %ld\n",k/2,k/2);
        }
        else if(l==k)
        {
            printf("%ld 0\n",k);
        }
        else
        {
            r=k+l;
            p=r/2;
            if(p*2==r)
            {
                l=l-p;
                printf("%lu %lu\n",p,k-p);
            }
            else
                printf("impossible\n");

        }

    }
    return 0;
}

