#include <stdio.h>
#include <math.h>
int main()
{
    int n;

    scanf("%d",&n);
    n=(n*(n+1))/2;
    n=pow(n,2);
    printf("%d\n",n);

    return 0;
}
