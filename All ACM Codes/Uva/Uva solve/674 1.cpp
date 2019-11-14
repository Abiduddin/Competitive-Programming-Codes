#include <bits/stdc++.h>
using namespace std;

int coin[]={1,5,10,25,50};
int dp[5][7500];

int change(int i,int amount)
{
    if(i>=5)
    {
        if(amount==0)
            return 1;
        else
            return 0;
    }

    if(dp[i][amount]!=-1)
        return dp[i][amount];

    int p1=0,p2=0;

    if(amount-coin[i]>=0)
        p1=change(i,amount-coin[i]);
    p2=change(i+1,amount);

    return dp[i][amount]=p1+p2;
}


int main()
{

    int tk;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&tk)!=EOF)
    {
        printf("%d\n",change(0,tk));
    }
    return 0;

}
