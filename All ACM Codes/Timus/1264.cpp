#include <stdio.h>

int main()
{
    register int a,b;

    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%d\n",a*(b+1));
    }
    return 0;
}