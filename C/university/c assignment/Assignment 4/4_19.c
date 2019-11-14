#include<stdio.h>

int main()
{
    int i, a, b, prod;
    prod = 1;

    printf("Enter the value of a & b:\n");
    scanf("%d%d", &a, &b);

    for(i = 0; i < b; i++)
        prod *= a;

    printf("%d^%d = %d\n", a, b, prod);

    return 0;
}

