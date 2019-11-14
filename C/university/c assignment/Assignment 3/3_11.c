#include<stdio.h>

int main()
{
    int n, i, prod;

    scanf("%d", &n);

    prod=1;

    for(i = 1; i <= n; i++)
        prod *= i;

    printf("%d\n", prod);

    return 0;
}

