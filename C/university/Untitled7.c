#include <stdio.h>
#include <string.h>
int main()
{
    char aa[100];
    gets(aa);
    int i,j,k;
    j=0;
    for(i=0;aa[i]!='\0';i++){
        j++;
    }
    printf("%d",j);
}
