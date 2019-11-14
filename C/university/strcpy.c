#include <stdio.h>
int main()
{
    char a[50],b[50];
    gets(a);
    int i,j,n;
    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("%s",b);

    return 0;
}
