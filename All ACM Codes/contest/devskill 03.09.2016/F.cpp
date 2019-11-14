#include <stdio.h>
#include <string.h>
#include <math.h>

int a[5000];

int main()
{
    int i,j,k,l,n,m,g;
    char ch[]="0abcdefghijklmnopqrstuvwxyz";
    a[0]=0;
    a[1]=2;
    j=2;
    for(i=3;i<=10100;i++)
    {

        if(i%2==0)
            continue;
        l=sqrt(i+1);
        n=1;
        for(k=3;k<=l;k++)
        {
            if(i%k==0)
            {
                n=0;
                break;
            }

        }
        if(n)
            a[j++]=i;
    }

    scanf("%d",&i);
    while(i--)
    {
        scanf("%d",&n);
        for(k=0;k<n;k++)
        {
            scanf("%d",&g);
            if(g==0)
                printf(" ");
            else if(g==-1)
                printf(".");
            else
            {
                for(l=1;l<j;l++)
                {
                    if(a[l]>g)
                    {
                        g=l-1;
                        break;
                    }
                }
                printf("%c",ch[(g%26)+1]);
            }
        }
        printf("\n");

    }

}
