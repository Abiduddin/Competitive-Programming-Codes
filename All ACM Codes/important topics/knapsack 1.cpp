#include <bits/stdc++.h>
using namespace std;

int dp[120][120],n,cap,wt[120],cst[120];

int func(int i,int j)
{
    if(i==n)
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    int profit1=0,profit2=0;

    if(j+wt[i]<=cap)
        profit1=cst[i]+func(i+1,j+wt[i]);

    profit2=func(i+1,j);

    return dp[i][j]=max(profit1,profit2);
}

int main()
{

    memset(dp,-1,sizeof(dp));
    scanf("%d%d",&n,&cap);

    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&wt[i],&cst[i]);
    }

    int mx=func(0,0);

    printf("%d\n",mx);
}
