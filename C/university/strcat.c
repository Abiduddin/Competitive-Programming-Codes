#include <stdio.h>
int main()
{
    char a[50],b[50],c[100];
    gets(a);
    gets(b);
    int i,j,n;
    for(i=0;a[i]!='\0';i++){
        c[i]=a[i];
    }
    for(j=0;b[j]!='\0';j++){
        c[i+j]=b[j];
    }
    c[i+j]='\0';
    printf("%s\n",c);

    return 0;
}
