#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char command[80],temp[80];
    int i,j;
    for(;;){
        printf("\nOperation? \n");
        gets(command);
        if(!strcmp(command,"quit")) break;

        printf("Enter your first number: ");
        gets(temp);
        i=atoi(temp);

        printf("Enter your second number: ");
        gets(temp);
        j=atoi(temp);

        if(!strcmp(command,"add"))
            printf("\n%d",i+j);
        else if(!strcmp(command,"subtract"))
            printf("\n%d",i-j);
        else if(!strcmp(command,"divide")){
            if(j)
                printf("\n%d",i/j);
        }
        else if(!strcmp(command,"multiply"))
            printf("\n%d\n",i*j);
        else printf("\nUnknown command.\n");
    }
    return 0;
}
