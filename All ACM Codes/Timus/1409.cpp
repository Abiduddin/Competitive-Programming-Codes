#include <stdio.h>

int main()
{
    register int a,b,n;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        n=a+b-1;
        printf("%d %d\n",(n-a),(n-b));
    }
    return 0;
}
