#include <stdio.h>
int main()
{
    char *p,**mp,str[90];
    p=str;
    mp=&p;
    printf("Enter your name: ");
    gets(*mp);
    printf("Hi %s",*mp);
    return 0;
}
