#include <stdio.h>
#include <string.h>

int main()
{
    char aa[51];
    int i,j;

    scanf("%d",&i);
    getchar();

    while(i--)
    {
        gets(aa);
        for(j=1;j<strlen(aa)-1;j++)
        {
            if(aa[j]=='L')
                aa[j]=aa[j-1];

            if(aa[j]=='R')
                aa[j]=aa[j+1];
        }
        puts(aa);
    }
    return 0;
}
