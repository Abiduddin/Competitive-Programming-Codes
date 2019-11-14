#include <stdio.h>
#include <string.h>


int main()
{
    int i,j,k,t;
    char a[40];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        i=strlen(a);
        for(j=i-1;j>=0;j--)
        {
            if(a[j]==a[j-1])
            {
                for(k=j-1;a[k]!='\0';k++)
                    a[k]=a[k+1];
            }

        }
        printf("%s\n",a);

    }
    return 0;
}

