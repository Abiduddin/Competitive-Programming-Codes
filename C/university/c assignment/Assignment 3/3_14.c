#include<stdio.h>


int fib(int n)
{
    int v;
    if(n==1 || n==2)
        v = 1;
    else
        v = fib(n-1) + fib(n-2);

    return v;
}

int main()
{
    int x, i;
    scanf("%d", &x);

    printf("%d ", fib(x));

    return 0;
}

