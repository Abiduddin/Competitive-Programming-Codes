#include <stdio.h>
#include <string.h>

int str_len(char ab[])
{
    int i;
        while(ab[i]!='\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char aa[100];
    int i=0,j,k,l;
    printf("Enter your string: ");
    gets(aa);

    printf("Your string length: %d",str_len(aa));
    return 0;
}
