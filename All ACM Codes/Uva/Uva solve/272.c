#include <stdio.h>
#include <string.h>

int main()
{
    int i,j=0;
    char aa[10000];

    while(gets(aa))
    {
        for(i=0;i<strlen(aa);i++)
        {
            if(aa[i]=='"')
            {
                if(j==0){
                j++;
                printf("``");

            }
            else
            {
                j--;
                printf("''");

            }
            }
            else
                printf("%c",aa[i]);
        }
        printf("\n");
        //puts(bb);

    }
    return 0;
}
