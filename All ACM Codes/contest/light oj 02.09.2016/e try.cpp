#include <stdio.h>

int main()
{
    int i,j=0,k,l,n,m;

    scanf("%d",&i);
    while(i--)
    {
        scanf("%d %d %d",&n,&m,&k);

        if(m>n)
            printf("case %d: Impossible\n",++j);
        else if((n==0)&&k!=0)
            printf("case %d: Impossible\n",++j);

        else
        {
            l=n-m;
            if(l<0||(l==0&&k==0))
                printf("case %d: Impossible\n",++j);
            else if(k==0&&l!=0)
                printf("case %d: 1\n",++j);
            else
                printf("case %d: %d\n",++j,k/l);
        }

    }

}
