#include <stdio.h>
int f1(int a)
{
    static int b=10;
    b=a+b;
    printf("%d\n",b);
}
int main()
{
    f1(10);
    f1(20);
    f1(40);
}
