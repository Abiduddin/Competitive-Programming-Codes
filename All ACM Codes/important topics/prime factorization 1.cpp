#include <stdio.h>


int main()
{
    int i,j,k,l,m;

    while(scanf("%d",&m)!=EOF)
    {
        for(i=2;i<=m;i++)
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
        printf("\n");
    }
}
