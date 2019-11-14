#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,k=0;
    printf("How many string you want to input?");
    scanf("%d",&n);
    char str[n][80];
    printf("Enter your string: (write 'end' for stop) \n");
    for(i=0;i<n+1;i++){
            k++;
        gets(str[i]);
        if(strcmp(str[i],"end")==0)
            break;

    }
    printf("\n%d \n",k);
    printf("List of the string:\n");
    for(i=0;i<n+1;i++){
        if(strcmp(str[i],"end")==0)
            break;
        puts(str[i]);
    }
    return 0;

}
