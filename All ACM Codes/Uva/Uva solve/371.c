#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    long long int i,j,k,l,m,n,o;

    while(1)
    {
        scanf("%lld%lld",&i,&j);
        n=0;
        o=0;


        if(i==0&&j==0)
            break;
        else
        {
            if(i>j)
            {
                k=i;
                i=j;
                j=k;
            }
            for(k=i;k<=j;k++)
            {
                l=0;
                m=k;
                do
                {
                    if(m%2==0)
                        m/=2;
                    else
                        m=(3*m+1);
                    l++;

                }while(m!=1);

                if(l>n)
                {
                    n=l;
                    o=k;
                }
            }
            printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",i,j,o,n);
        }
    }

}
