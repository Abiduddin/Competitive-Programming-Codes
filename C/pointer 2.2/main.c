#include <stdio.h>
#include <string.h>
int main()
{
    char aa[80],*ab;
    printf("Enter your string: ");
    gets(aa);
    ab=aa;
    //int a=0;
    while(*ab)
    {
        printf("%c",*ab++);
        //ab++;
    }
    return 0;
}
