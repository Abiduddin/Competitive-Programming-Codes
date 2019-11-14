#include <stdio.h>
int main()
{
    char a[50],b[50];
    int i,j=0;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b[i]){
            j=1;
        }
        else
        {
            j=0;
            break;
        }
    }
    if(j==1)
    printf("Ok");

    else
        printf("Not Ok");

    return 0;
}
