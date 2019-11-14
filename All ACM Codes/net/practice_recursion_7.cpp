#include <stdio.h>

int rec(int i)
{
    int k;
    if(i==0)
        return 0;
    if(i<=2)
        return 1;
    k=rec(i-1)+rec(i-2);

    return k;
}

int main()
{
    int j;
    scanf("%d",&j);
    printf("%d\n",rec(j));
    return 0;
}
