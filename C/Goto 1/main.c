#include <stdio.h>
int main()
{
    int i;
    p:printf("Enter a number:");
    scanf("%d",&i);
    if(i<10)
        goto p;
    return 0;
}
