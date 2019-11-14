#include <stdio.h>
#include <string.h>


int main()
{
    char a[100],ch;
    int i,j,k,l;

    while(scanf("%s",a)!=EOF)
    {
        k=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if((a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V'))
                {
                    if(k!=1)
                    printf("1");
                    k=1;
                }
            else if((a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z'))
                {
                    if(k!=2)
                    printf("2");
                    k=2;
                }
            else if((a[i]=='D'||a[i]=='T'))
                {
                    if(k!=3)
                    printf("3");
                    k=3;
                }
            else if((a[i]=='L'))
                {
                    if(k!=4)
                    printf("4");
                    k=4;
                }
            else if((a[i]=='M'||a[i]=='N'))
                {

                    if(k!=5)
                    printf("5");
                    k=5;
                }
            else if((a[i]=='R'))
                {
                    if(k!=6)
                    printf("6");
                    k=6;
                }
                else
                    k=0;
        }

        printf("\n");

    }
}
