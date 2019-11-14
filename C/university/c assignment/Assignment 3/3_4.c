#include<stdio.h>

int main()
{
    int i, n, sum=0;

    scanf("%d", &n);

    for(i=1; i<= n; i=i+3)
    {
        sum += i;
    }
    printf("1+4+7+....+%d = %d\n", n, sum);

    return 0;
}
