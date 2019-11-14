#include <stdio.h>

int main()
{
    register int a,b,n;

    while(scanf("%d%d%d",&n,&a,&b)!=EOF)
    {
        printf("%d\n",n*(2*(a*b)));
    }
    return 0;
}
