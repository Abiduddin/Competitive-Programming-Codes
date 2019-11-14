#include <stdio.h>

int main()
{
    int i,j,k,l1,l2,n;

    scanf("%d",&k);

    n=k+(k-1);
    j=1;
    l1=n/2;
    while(k--)
    {

        for(i=1;i<=l1;i++)
        {
            printf(".");
        }


        for(i=1;i<=j;i++)
        {
            printf("*");
        }

        j=j+2;

        for(i=1;i<=l1;i++)
        {
            printf(".");
        }

        printf("\n");
        l1--;

    }
}
