#include <bits/stdc++.h>
using namespace std;

int dp[210][210];
int table[210][210],n;

int monkey(int x,int y)
{
    if(x<0||y<0||x>=n||y>=n)
        return 0;
    if(dp[x][y]!=-1)
        return dp[x][y];

    int bana=-9999;
    bana=max(bana,table[x][y]+monkey(x+1,y-1));
    bana=max(bana,table[x][y]+monkey(x+1,y+1));

    return dp[x][y]= bana;

}

int main()
{
    int t,i,j,k,l,p,v,u,r,c=0;

    scanf("%d",&t);
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        memset(table,0,sizeof(table));
        scanf("%d",&k);
        n=2*k-1;
        l=k-1;
        p=l;
        j=1;
        r=0;
        for(i=0;i<n;i++)
        {
            for(u=0,v=p;u<j;u++,v+=2)
            {
                scanf("%d",&table[r][v]);
            }
            r++;
            if(i<l){
                p--;
                j++;
            }
            else{
                p++;
                j--;
            }
        }

        printf("Case %d: %d\n",++c,monkey(0,l));


    }


}
