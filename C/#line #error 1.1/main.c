#include <stdio.h>

int main()
{
    int i;
    //reset line number to 1000 and file name to "file name"
    #line 1000 "untitled6.c"
    #error check the line number file name
    return 0;
}
