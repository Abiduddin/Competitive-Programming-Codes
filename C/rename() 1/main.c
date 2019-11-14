#include <stdio.h>
#include <stdlib.h>
int main()
{
    if(rename("aa.txt","AA.txt"))
        printf("Rename failed.");
    else
        printf("Rename successful.\n");
    return 0;
}
