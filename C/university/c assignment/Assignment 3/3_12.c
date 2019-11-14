#include<stdio.h>

int fact(int x)
{
    int v;
    if(x <= 1)
        v=1;
    else
        v= x*fact(x-1);

    return v;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fact(n));

    return 0;
}

