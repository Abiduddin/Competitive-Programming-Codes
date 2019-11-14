#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[]="This is a pointer test program";
    char *ch2;
    int len;
    ch2=ch1;
    len=strlen(ch1);
    printf("String of ch1 is : %s    Length = %d\n",ch1,len);
    len=strlen(ch2);
    printf("String of ch2 is : %s    Length = %d\n",ch2,len);
    return 0;
}
