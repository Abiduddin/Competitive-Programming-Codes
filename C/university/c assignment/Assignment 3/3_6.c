#include<stdio.h>
int main()
{
    int i, j, n, v=1;

    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=v; j++)
        {
            printf("%d", v);
        }
        printf("\n");
        v++;
    }
    for(i=0; i<n+1; i++)
        printf(".");

    return 0;
}
