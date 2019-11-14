#include <stdio.h>

int main()
{
    long int i,j,k,l,m,n,t,c=0,p;
    scanf("%ld",&t);

    while(t--)
    {
        k=0,m=0,n=0;
        scanf("%ld",&l);
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                scanf("%ld",&p);
                if(j<k)
                {
                    m+=p;
                }
                else if(j>k)
                {
                    n+=p;
                }
            }
            k++;
        }
        if(m==n)
            printf("Case %ld: Both\n",++c);
        else if(m<n)
            printf("Case %ld: Shaly\n",++c);
        else
            printf("Case %ld: Baly\n",++c);
    }
    return 0;

}

