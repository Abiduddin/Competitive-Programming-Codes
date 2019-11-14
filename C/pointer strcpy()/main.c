#include <stdio.h>
mystrcpy(char *to,char *from);
int main()
{
    char str[80];
    mystrcpy(str,"this is a test");
    printf(str);
    return 0;
}
mystrcpy(char *to,char *from)
{
    while(*from) *to++=*from++;
    *to='\0';
}
