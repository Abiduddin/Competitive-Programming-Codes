#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],s1[100],s2[200];
    gets(s);
    strcpy(s1,s);
    puts(s1);
    strcat(s1,s);
    puts(s1);

}
