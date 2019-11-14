#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,k,l,m,n,a[1200];

    while(scanf("%d%d",&i,&j)!=EOF)
    {
        l=0;

        for(k=1;k<=i;k++)
        {
            n=1;
            for(m=2;m<=sqrt(k);m++)
            {
                if(k%m==0)
                    n=0;
            }
            if(n||k==2){
                a[l++]=k;
            }
        }

        if(j*2>=l)
        {
            printf("%d %d:",i,j);
            for(n=0;n<l;n++)
                printf(" %d",a[n]);
            printf("\n\n");
        }

        else if(l%2==0)
        {
            printf("%d %d:",i,j);
            k=l/2-j;
            for(n=0;n<(j*2)&&a[k]!='\0';k++,n++)
                printf(" %d",a[k]);
                printf("\n\n");
        }
        else
        {
               printf("%d %d:",i,j);
               k=l/2-(j*2-1)/2;
            for(n=0;n<(j*2-1)&&a[k]!='\0';k++,n++)
                printf(" %d",a[k]);
                printf("\n\n");
        }
    }
    return 0;

}

