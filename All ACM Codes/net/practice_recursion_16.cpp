#include <stdio.h>
#include <string.h>


void rev(char a[],int i)
{
    if(i<0)
    {
        printf("\n");
        return;
    }
    printf("%c",a[i]);
    rev(a,i-1);

}

int main()
{
    int i,j,k;
    char a[1000];
    gets(a);
    j=strlen(a);
    rev(a,j-1);
}
