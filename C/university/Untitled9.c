#include <stdio.h>
int main()
{
    int n=10;
    printf("%d",fun(n));
}
int fun(int n)
{
    if(n>0) return(n+fun(n-1));
}
