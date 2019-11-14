#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,k,a,l,m,n,j,p;
    char c[1000],d[1000];

    while(scanf("%d",&a)!=EOF)
    {
    m=a;
    for(i=2,k=0;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            a=a/i;
            c[k]=i+'0';
            i=1;
            k++;
        }
    }
    if(a>=10)
    {

        sprintf(d,"%d",a);
        j=strlen(d);
        for(i=0;i<=j;i++,k++)
            c[k]=d[i];

        k--;

    }
    else
    {
        c[k]=a+'0';
    }

    {
       // c[k]=a+'0';
        l=c[0]-48;
        for(i=1;i<=k;i++){
            n=c[i]-48;
            l=(l*n);


        }
        if(m==0)
            printf("10\n");
        else if(l==m)
        {
            for(i=0;i<=k;i++)
                printf("%c",c[i]);
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }

    }
    }


    return 0;

}
