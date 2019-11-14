#include <stdio.h>
#include <string.h>


int main()
{
    char a[300000];
    int i,j,k,l;

    while(scanf("%s",a)!=EOF)
    {
        l=strlen(a);
        k=1;

        while(k)
        {
            k=0;
            for(i=0,j=1;i<l&&j<l;i++,j++)
            {

                if(a[j]=='"')
                {
                    i--;
                    continue;
                }
                if(a[i]=='"')
                {
                    i=j-1;

                    continue;
                }
                if(a[i]==a[j])
                {

                    a[i]='"';
                    a[j]='"';
                    k=1;
                }
            }
        }
        k=1;
        for(i=0;i<l;i++)
        {
            if(a[i]!='"'){
                printf("%c",a[i]);
                k=0;
            }
        }
        if(k)
            printf("-1\n");
        else
        printf("\n");

    }


}
