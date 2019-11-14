#include <stdio.h>
#include <string.h>
int main()
{
    int serverusers[5][2]={
    1,14,
    2,28,
    3,19,
    4,8,
    5,15
    };
    int server;
    int i;
    printf("Enter the server number: ");
    scanf("%d",&server);
    for(i=0;i<5;i++)
    if(server==serverusers[i][0]){
        printf("There are %d users on server %d.\n",serverusers[i][1],server);
        break;
    }
    if(i==5)
        printf("Server not listed.\n");
    return 0;
}
