#include<stdio.h>
int main()
{
    int a[2][3], rowSum[2]= {0}, colSum[3]= {0}, i,j;

    printf("input matrix\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
            colSum[j] += a[i][j];
        }
    }

    printf("Row Sum\n");

    for(i=0; i<2; i++)
    {
        printf("%d\n", rowSum[i]);
    }
    printf("col Sum\n");

    for(j=0; j<3; j++)
    {
        printf("%d ", colSum[j]);
    }

    return 0;
}
