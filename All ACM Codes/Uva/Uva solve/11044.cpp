#include <stdio.h>

int main()
{
    register int n;
    int k,l;

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&k,&l);
        k=k/3;
        l=l/3;
        printf("%d\n",k*l);
    }
    return 0;
}
