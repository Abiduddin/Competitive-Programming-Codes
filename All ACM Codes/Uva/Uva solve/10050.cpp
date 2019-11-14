#include <stdio.h>

int main()
{
//    freopen("aa.txt","r",stdin);
//    freopen("aa1.txt","w",stdout);

    int i,j,k,l,m,n,o,p,g,a[200];

    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&m,&l);
        k=0;
        o=6;
        g=7;
        for(i=0;i<l;i++)
            scanf("%d",&a[i]);

        for(i=1;i<=m;i++)
        {
            if(i==o)
            {
                o+=7;
            }
            else if(i==g)
                g+=7;
            else
            {

            for(j=0;j<l;j++)
            {
                if(i%a[j]==0)
                {
                    k++;
                    break;
                }

            }
            }
        }
        printf("%d\n",k);



    }
}
