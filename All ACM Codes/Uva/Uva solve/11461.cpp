#include <stdio.h>
#include <math.h>

int main()
{
    register int i,j,k,l,m;
    while(1)
    {
        m=0;
        scanf("%d%d",&i,&j);
        if(i==0&&j==0)
            break;
        else
        {
            for(k=i;k<=j;k++)
            {
                l= sqrt(k);
                if((l*l)==k)
                    m++;
            }
        }
        printf("%d\n",m);

    }
    return 0;
}
