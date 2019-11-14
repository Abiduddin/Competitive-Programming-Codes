#include <stdio.h>
int main()
{
    int i,n,j;
    printf("How many string : ");
    scanf("%d",&n);
    char a[n+1][80];
    for(i=0;i<n+1;i++){
        gets(a[i]);
        if(strcmp(a[i],"end")==0)
            break;

    }
    printf("The list of string : \n");
    for(i=0;i<n+1;i++){
        if(strcmp(a[i],"end")==0)
            break;
        puts(a[i]);
    }
    return 0;
}
