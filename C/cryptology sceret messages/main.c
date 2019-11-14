#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char a[80],b;
    int i,j,len;
    printf("Enter your code: ");
    gets(a);
    printf("\n\n");
    len=strlen(a);
    for(j=0;j<len;j++){
        if(a[j]!=' '&&a[j]!='x'&&a[j]!='y'&&a[j]!='z'&&a[j]!='X'&&a[j]!='Y'&&a[j]!='Z'){
        i=toascii(a[j]);
        i+=3;
        printf("%c",i); }
        else if(a[j]==' ')
            printf(" ");
        else if(a[j]=='x'||a[j]=='y'||a[j]=='z'||a[j]=='X'||a[j]=='Y'||a[j]=='Z'){
            switch(a[j])
            {
            case 'x':
                printf("a");
                break;
            case 'y':
                printf("b");
                break;
            case 'z':
                printf("c");
                break;
            case 'X':
                printf("A");
                break;
            case 'Y':
                printf("B");
                break;
            case 'Z':
                printf("C");
                break;
            }
        }
    }
    //i=toascii(b);
    //i+=3;
    printf("\n%s",a);

}
