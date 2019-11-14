#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
    char aa[80],bb[80];
    int i,j;
    printf("Enter number");
    gets(aa);
    i=atoi(aa);
    printf("Enter");
    gets(bb);
    j=atoi(bb);
    printf("\n atoi i=%d  j=%d",i,j);
}

