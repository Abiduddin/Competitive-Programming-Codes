#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char str[80],*p;
    printf("Enter a string: ");
    gets(str);
    p=str;
    while(*p)
    {
        *p++=toupper(*p);

    }
    printf("%s\n",str);
    p=str;
    while(*p){
        *p++=tolower(*p);

    }
    printf("%s\n",str);
    return 0;
}
