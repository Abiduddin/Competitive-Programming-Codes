#include<stdio.h>
int main()
{
    int i,j,n,star,space;
    scanf("%d", &n);
    star=1;
    space=n-1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        space--;
        for(j=1; j<=star; j++)
        {
            printf("*");
        }
        star=star+2;
        printf("\n");
    }
    n--;
    star=2*n-1;
    space=1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        space++;
        for(j=1; j<=star; j++)
        {
            printf("*");
        }
        star=star-2;
        printf("\n");

    }
    return 0;
}



