#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,l,c=0;

    while(1)
    {
        j=1,l=0;
        scanf("%d",&i);
        if(i<0)
            break;
        else
        {
            while(j<i)
            {
                j=j*2;
                //t=t*2;
                l++;
            }
        }
        printf("Case %d: %d\n",++c,l);

    }
    return 0;
}
