#include <stdio.h>
int main()
{
    char str[80];
    *(str+3)='H';
    printf("%c\n",*(str+3));
    printf("%c\n",str[3]);
    return 0;
}
