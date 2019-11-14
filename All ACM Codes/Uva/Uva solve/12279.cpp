//#include <bits/stdc++.h>
#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int j,c=0,l;
    int i,k;

    while(1)
    {
        l=0;
        scanf("%d",&i);
        if(i==0)
            break;
        else
        {
            for(j=0;j<i;j++)
            {
                scanf("%d",&k);
                if(k==0)
                    l++;
            }
            printf("Case %d: %d\n",++c,(i-l-l));
        }
    }

    return 0;
}
