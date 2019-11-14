#include <stdio.h>

#define MSK(str) #str

int main()
{
    int value;
    value=10;
    printf("%s is %d", MSK(value),value);
    return 0;
}
