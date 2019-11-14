#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char aa[80];
    gets(aa);
    while(aa[i])
        i++;
    printf("%d",i);
    return 0;
}
