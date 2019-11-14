#include <stdio.h>

int main()
{
    int i,j,k,k1,l1,l2,n,i2,i3;

    scanf("%d",&k);

    n=k+(k-1);
    k1=k-1;
    j=1;
    l1=n/2;
    while(k--)
    {

        for(i=1;i<=l1;i++)
        {
            printf(".");
        }


        for(i2=1;i2<=j/2;i2++)
                printf("%d",i2);

            for(i3=i2;i3>0;i3--)
                printf("%d",i3);

        j=j+2;

        for(i=1;i<=l1;i++)
        {
            printf(".");
        }

        printf("\n");
        l1--;

    }

    j=j-4;
    l1=1;
    while(k1--)
    {

        for(i=1;i<=l1;i++)
        {
            printf(".");
        }


        for(i2=1;i2<=j/2;i2++)
                printf("%d",i2);

            for(i3=i2;i3>0;i3--)
                printf("%d",i3);

        j=j-2;

        for(i=1;i<=l1;i++)
        {
            printf(".");
        }

        printf("\n");
        l1++;

    }
}
