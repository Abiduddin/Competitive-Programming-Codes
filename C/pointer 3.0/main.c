#include <stdio.h>
myputs(char *p);
int main()
{
    myputs("this is a test.");
    return 0;
}
myputs(char *p)
{
    while(*p){
        printf("%c",*p++);
        //p++;
    }
    printf("\n");
}
