#include <stdio.h>
#include <ctype.h>
int main()
{
    int i,n,j,k;
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
    for(i=0;i<n+1;i++){
        j=strlen(a[i]);
        for(k=0;k<j;k++){
            if(isupper(a[i][k]))
                a[i][k]=tolower(a[i][k]);
            else
                a[i][k]=toupper(a[i][k]);
        }
    }
    printf("\n\nOutput string are: \n");
    for(i=0;i<n+1;i++)
        puts(a[i]);
    return 0;
}
