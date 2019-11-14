#include <stdio.h>


int main()
{
    int i,j,k,l,n,m1,m2,mult,sum,p;
    scanf("%d",&n);

    sum=0;
    m1=1;
    m2=1;
    mult=1;

    for(i=1;i<=n;i++)
    {
        sum=sum+m1;
        m1++;

        if(m1>2)
        {
            k=m1-1;

            j=i-1;
            l=2;
            p=l;
            while(j--)
            {
            l=p;
            mult=1;
            while(l--)
            {
                mult=m1*mult;
                m1++;
            }

            sum=sum+mult;

            p++;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
