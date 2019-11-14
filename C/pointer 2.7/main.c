#include <stdio.h>
#include <string.h>
int main()
{
    char aa[80],ab[80],*p,*q;
    printf("Enter your 1st string: ");
    gets(aa);
    printf("Enter your 2nd string: ");
    gets(ab);
    p=aa+strlen(aa);
    q=ab;
    while(*q)
        *p++=*q++;
    *p='\0';
    puts(aa);
    return 0;
}
