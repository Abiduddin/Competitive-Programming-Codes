#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    p=malloc(80);

    if(!p){
        printf("Allocation Failed.");
        exit(1);
    }
    printf("Enter a string: ");
    gets(p);
    printf(p);
    free(p);

    return 0;
}
