#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l;
    char a[]="122",b[100];
    strrev(a);
    strcpy(b,a);
    printf("%s %s\n",b,a);
    strrev(a);

    if(!strcmp(a,b))
        printf("Yes");

    return 0;
}

