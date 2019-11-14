#include<stdio.h>

void reverse(void)
{
    char str;
    str = getchar();
    if(str != '\n')
        reverse();
    putchar(str);
}
int main()
{
    reverse();

    return 0;
}
