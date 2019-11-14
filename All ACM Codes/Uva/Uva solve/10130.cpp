#include <bits/stdc++.h>
using namespace std;

int cap,cs[1020],wt[1020],dp[1020][1020],n;

int knp(int i, int w)
{
    if(i==n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];

    int pro1=0,pro2=0;

    if(w+wt[i]<=cap)
        pro1=cs[i]+knp(i+1,w+wt[i]);

    pro2=knp(i+1,w);

    return dp[i][w]=max(pro1,pro2);
}

int main()
{
    int t,p,i;

    scanf("%d",&t);

    while(t--)
    {

        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&cs[i],&wt[i]);
        }
        scanf("%d",&p);
        int sum=0;
        while(p--)
        {
            memset(dp,-1,sizeof(dp));
            scanf("%d",&cap);
            sum+=knp(0,0);
        }
        printf("%d\n",sum);

    }
}
