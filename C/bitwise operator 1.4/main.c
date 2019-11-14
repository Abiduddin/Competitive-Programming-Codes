#include <stdio.h>
int main()
{
    short i;
    i=1;
    i=1|32768;
    printf("%hd",i);
    return 0;
}
