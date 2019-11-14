#include <bits/stdc++.h>
using namespace std;

int dp[5][7500];
int coin[]={1,5,10,25,50},t;

int change(int i,int amount)
{
    if(i>=5)
    {
        if(amount==t)
            return 1;
        else
            return 0;
    }
    int pr1=0,pr2=0;

    if(dp[i][amount]!=-1)
        return dp[i][amount];

    if(coin[i]+amount<=t)
         pr1=change(i,amount+coin[i]);

    pr2=change(i+1,amount);

    return dp[i][amount]=pr1+pr2;
}

int main()
{
    register int i;
    int num[7492];

    for(i=0;i<=7490;i++)
    {
        t=i;
        memset(dp,-1,sizeof(dp));
        num[i]=change(0,0);
    }

    while(scanf("%d",&t)!=EOF)
    {

        printf("%d\n",num[t]);
    }

}
