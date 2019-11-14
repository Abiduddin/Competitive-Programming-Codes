#include <stdio.h>
int main()
{
    char a[50],b[50];
    gets(a);
    int i,j;

    for(i=0;a[i]!='\0';i++){
        ;
    }
    for(j=i-1;j>=0;j--){
        printf("%c",a[j]);
    }
    printf("\n");


    return 0;
}
