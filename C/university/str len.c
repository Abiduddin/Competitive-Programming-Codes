#include <stdio.h>
int main()
{
    char a[10];
    int i;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        ;
    }
    printf("Length : %d\n",i);

    return 0;
}
