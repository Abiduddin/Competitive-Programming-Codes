#include <stdio.h>

int main()
{
    int i,j,k,l,t,c=0;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d%d",&i,&j,&k);
        l=j;
        while(k--)
        {

            if(l!=i)
                l++;
            else
                l=1;

;
        }
        printf("Case %d: %d\n",++c,l);
    }
    return 0;

}
