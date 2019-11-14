#include <stdio.h>
#include <string.h>

int main()
{
    char aa[]="now is the time for all good men";

    if(strstr(aa,"me"))
        printf("found");
}
