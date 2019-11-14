#include <stdio.h>

int main()
{
    int a=9,b=7;
    a=a^b;
    b=a^b;
    a=a^b;

    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
/*
a=9=1001
b=7=0111
a=a^b=1001^0111=1110=14
b=a^b=1110^0111=1001=9
a=a^b=1110^1001=0111=7
*/
