#include <stdio.h>

int main()
{
    short i;

    printf("Enter a number: ");
    scanf("%hd",&i);
    if(i&32768) printf("Number is negative.\n");

    return 0;
}
