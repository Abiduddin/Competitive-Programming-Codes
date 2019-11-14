#include <stdio.h>

int rec(int i)
{
    if(i<=1)
        return 1;
    i=i*rec(i-1);
    return i;
}

int main()
{
    int i,j,k;

    scanf("%d",&j);
    printf("%d\n",rec(j));
    return 0;
}
