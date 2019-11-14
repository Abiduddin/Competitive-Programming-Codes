#include <stdio.h>
int main()
{
    char a[50],b;
    int i,j,n=0;
    gets(a);
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b){
            n=1;
            printf("\n\n\n\nFound!!!\n\n\n\n");
            break;
        }
    }
    if(n==0){
        printf("\n\n\n\nSorry Not Found!!!\n\n\n\n");
    }

    return 0;
}
