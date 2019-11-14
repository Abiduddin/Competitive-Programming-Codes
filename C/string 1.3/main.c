#include <stdio.h>
#include <string.h>
int main()
{
    char str[80];
    printf("Enter a string (less than 80 chars): ");
    gets(str);
    printf(str);
    return 0;
}
