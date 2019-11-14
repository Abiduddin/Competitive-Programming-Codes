#include <stdio.h>
#include <string.h>

char a[110][30];
//int anum[110];

int main()
{
    int i,j,k,l,m,n,p,r,s=0;

    scanf("%d",&i);
    while(i--)
    {
        scanf("%d",&j);

        for(k=0;k<j;k++)
        {
            scanf("%s",&a[k]);
        }
        m=j-1;
        n=0;
        p=0;
        r=0;
        for(k=0;k<m;k++)
        {
            n=0;
            for(l=k+1;l<j;l++)
            {
                if(!strcmp(a[k],a[l]))
                {
                    n++;
                }
            }
            if(n>p)
            {
                p=n;
                r=k;
            }

        }
        printf("Case %d: %s\n",++s,a[r]);

    }

}
