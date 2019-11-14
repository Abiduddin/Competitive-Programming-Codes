#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int k,l,j,m;
    int i;

    scanf("%d",&m);
    while(m--)
    {
        scanf("%d%d",&i,&j);
        while(j--)
        {
            for(k=1;k<=i&&k<=9;k++)
            {
                for(l=0;l<k;l++)
            {
                printf("%d",k);
            }
            printf("\n");
            }
            for(k=l-1;k>=1;k--)
            {
                for(l=0;l<k;l++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            if((m!=0)||(j!=0))
            {
                //printf("#########################");
            printf("\n");
            }

        }
    }
    return 0;
}
