#include <bits/stdc++.h>
using namespace std;

int dp[55][1002];
int n;
vector <vector <int > > coin;
int change(int index_x,int money)
{
    if(index_x>=n||money==0)
    {
        if(money==0)
            return 1;
        return 0;
    }

    if(dp[index_x][money]!=-1)
        return dp[index_x][money];

    int p1=0;

    for(int i=0;i<coin[index_x].size();i++)
    {
        if(money-coin[index_x][i]>=0)
            p1+=change(index_x+1,money-coin[index_x][i])%100000007;
        else
            break;
    }
    p1+=change(index_x+1,money)%100000007;

    return dp[index_x][money]=p1%100000007;


}



int main()
{
    register int i,j;
    int k,t,c=0,money,arr[60],p;
    vector <int > tt;

    scanf("%d",&t);

    while(t--)
    {
        coin.clear();
        memset(dp,-1,sizeof(dp));
        scanf("%d%d",&n,&money);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
        {
            scanf("%d",&k);
            tt.clear();
            p=arr[i];
            j=0;
            while(k--)
            {
                j+=p;
                tt.push_back(j);

            }
            coin.push_back(tt);
        }

       // printf("Case %d: %d\n",++c,change(0,money));
        printf("Case %d: %d\n",++c,(change(0,money))%100000007);
    }

}
