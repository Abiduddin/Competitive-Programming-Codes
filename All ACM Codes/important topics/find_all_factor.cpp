/// find all factor of a number

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,l,n,a[1000];

    while(scanf("%d",&n)!=EOF)
    {
        j=0;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                a[j++]=i;
                if(i!=sqrt(n))
                    a[j++]=n/i;
            }
        }
        for(i=0;i<j-1;i++)
            for(k=0;k<j-1-i;k++)
            if(a[k]>a[k+1])
        {
            l=a[k+1];
            a[k+1]=a[k];
            a[k]=l;
        }

        printf("All factor of the number\n");
        for(i=0;i<j;i++)
            printf("%d ",a[i]);
        printf("\n\n");
    }
    return 0;
}
