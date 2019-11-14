#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,l,m;

    while(scanf("%d",&m)!=EOF)
    {
        j=sqrt(m+1);
        for(i=2;i<=j;i++)
        {
            if(m%i==0)
            {
                k=0;
                while(m%i==0)
                {
                    m=m/i;
                    k++;
                }
                printf("%d^%d ",i,k);
            }
        }
        if(m!=1)
            printf("%d^1",m);
        printf("\n");
    }
}
