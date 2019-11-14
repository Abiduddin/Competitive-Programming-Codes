
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,c;

    while(scanf("%d",&l)!=EOF)
    {
        k=1;
       // m=10000000;
        for(c=1;c<=l;c++)
        {
            scanf("%d%d",&i,&j);
            if(i<=55)
            {

                if(k==1)
                    m=j;
                else if(j<m)
                    m=j;

                k=0;

            }

        }
        if(k)
            printf("Bad luck\n");
        else
            printf("%d\n",m);
    }
}
