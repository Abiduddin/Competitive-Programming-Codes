#include <stdio.h>
#include <string.h>
int main()
{
    char aa[100];
    gets(aa);
    if(strstr(aa,"yes")){
        printf("Yes\n");
    }
    puts(strrev(aa));
}
