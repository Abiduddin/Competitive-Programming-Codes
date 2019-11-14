#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[10000000];
int main()
{

    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int j,k,l,m,n;
    char ch;

    while(gets(a))
    {
        //getchar();
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(isalpha(a[i]))
            {
                if(strchr("AaEeIiOoUu",a[i]))
                {
                    for(;;i++)
                    {
                        if(!(isalpha(a[i])))
                        {
                            i--;
                            printf("ay");
                            break;
                        }
                        printf("%c",a[i]);
                    }
                }
                else
                {
                    ch=a[i];
                    i++;
                    for(;;i++)
                    {
                        if(!(isalpha(a[i])))
                        {
                            i--;
                            printf("%cay",ch);
                            break;
                        }
                        printf("%c",a[i]);
                    }
                }
            }
            else
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
}
