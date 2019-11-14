#include <stdio.h>

int sum(int a);

int main()
{
    int i,j,k,l;

    printf("%d\n",sum(7));
}

int sum(int a)
{
    if(a==0) return 0;
    return (sum(a-1)+a);
}
