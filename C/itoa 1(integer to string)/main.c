#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char a[30];
    printf("Enter a number: ");
    scanf("%d",&i);
    itoa(i,a,10);
    printf("Decimal: %s\n",a);
    itoa(i,a,16);
    printf("Hexadecimal: %s\n",a);
    itoa(i,a,2);
    printf("Binary: %s\n",a);
    return 0;
}
