#include <stdio.h>

int main()
{
    long int a,b;

    register int g;
    scanf("%d",&g);
    while(g--)
    {
        scanf("%ld%ld",&a,&b);
        printf("%ld\n",labs(a-b));
    }
    return 0;
}
