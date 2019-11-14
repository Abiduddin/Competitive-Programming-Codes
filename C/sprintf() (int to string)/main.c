#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char st[30];
    printf("Enter a number: ");
    scanf("%d",&a);
    sprintf(st,"%d",a);
    printf("%s",st);

}
