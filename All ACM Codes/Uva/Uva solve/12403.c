#include <stdio.h>

int main()
{
    long int t,i,j=0;
    char a[100];
    scanf("%d",&t);
    if(t>=1&&t<=100)
    {
        while(t--)
        {
            scanf("%s",a);
            if(!strcmp(a,"donate"))
            {
                scanf("%d",&i);
                if(i>=100&&i<=100000)
                {
                j+=i;
                }
            }
            else if(!strcmp(a,"report"))
                printf("%d\n",j);
        }
    }
    return 0;
}
