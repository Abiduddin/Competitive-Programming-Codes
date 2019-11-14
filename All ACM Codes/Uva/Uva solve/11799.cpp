#include <stdio.h>

int main()
{
    int i,j,k,l,t,c=0;

    scanf("%d",&t);
    while(t--)
    {
        l=0;
        scanf("%d",&i);
        for(j=0;j<i;j++){
            scanf("%d",&k);
            if(k>l)
            {
                l=k;
            }
        }
        printf("Case %d: %d\n",++c,l);
    }
    return 0;
}
