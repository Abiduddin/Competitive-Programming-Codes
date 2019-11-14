#include <stdio.h>

int main()
{
    int i,j,k,l;

    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        j=i;
        l=k-i;
        while(j--)
        {
            printf("*");
        }

        while(l--)
        {
            printf(".");
        }

        printf("\n");
    }
}
