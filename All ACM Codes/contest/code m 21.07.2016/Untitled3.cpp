#include <stdio.h>

int main()
{
    register int m,n,o;
    int i,j,k,l,p,c=0;


    scanf("%d",&k);

    while(k--)
    {
        scanf("%d",&l);
        p=0;

        for(m=l/3;m<=l;m++)
        for(n=2;n<=(l-m);n++)
        for(o=1;o<=(l-m-n);o++)
        {
            if((m>n)&&(n>o)&&(m+n+o==l))
            {
                p++;
                printf("%d %d %d\n",m,n,o);
            }
        }
        printf("Case %d: %d\n\n",++c,p);
    }

    return 0;

}
