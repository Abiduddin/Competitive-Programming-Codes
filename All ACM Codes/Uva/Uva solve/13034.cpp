#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i,j,k,t,c=0;
    //int j;
    scanf("%d",&t);
    while(t--)
    {
        k=13;
        i=0;
        while(k--)
        {
            scanf("%d",&j);
            if(j==0)
                i=1;
        }
        if(i)
            printf("Set #%d: No\n",++c);
        else
            printf("Set #%d: Yes\n",++c);

    }
    return 0;

}

