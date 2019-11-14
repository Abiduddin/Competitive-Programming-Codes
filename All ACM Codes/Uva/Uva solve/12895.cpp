#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i,j,k,l,t;
    char a[20],b[20];
    double c;

    scanf("%d",&t);
    getchar();
    while(t--)
    {
       gets(a);
       l=strlen(a);

        c=0;
       for(i=0;i<l;i++)
       {

            k=a[i]-'0';
            c=c+pow(k,l);

       }
       sprintf(b,"%.0lf",c);

       if(!strcmp(a,b))
        printf("Armstrong\n");
       else
        printf("Not Armstrong\n");
    }
    return 0;
}
