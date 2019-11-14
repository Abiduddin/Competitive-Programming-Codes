#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

int main()
{
    int i,j,k,l,p,r,n,m;
    char a[10];

    while(scanf("%d %d",&k,&l)!=EOF)
    {
        n=0;
        for(i=k;i<=l;i++)
        {
            sprintf(a,"%d",i);
            p=strlen(a);
            //p=p/2;
            j=1;
            for(r=0;r<p-1;r++)
            {
                for(m=r+1;m<p;m++)
                {
                    if(a[r]==a[m])
                    {
                        j=0;
                        break;
                    }
                }
            }
            if(j)
            {
                n++;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
