#include <stdio.h>

int main()
{
    int i,j,k,l;

    scanf("%d",&k);

    for(i=k;i>=1;i--)
    {
        j=i;
        l=k-i;

        while(l--)
        {
            printf(".");
        }
        while(j--)
        {
            printf("*");
        }



        printf("\n");
    }
}
