#include<stdio.h>
int main()
{
    int i, n;
    float x, sum=0, avg;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("Sum is %g\n", sum);

    avg= sum/n;
    printf("Average = %g\n", avg);

    return 0;
}
