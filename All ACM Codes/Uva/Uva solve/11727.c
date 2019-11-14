#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int t,i,j,k,c=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&i,&j,&k);
        if((i<=j&&i>=k)||(i>=j&&i<=k))
            printf("Case %d: %d\n",++c,i);
        else if((j<=i&&j>=k)||(j>=i&&j<=k))
            printf("Case %d: %d\n",++c,j);
        else
            printf("Case %d: %d\n",++c,k);
    }
    return 0;

}
