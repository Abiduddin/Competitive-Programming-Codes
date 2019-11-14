#include <bits/stdc++.h>
using namespace std;
#define li pair<int, int>
#define ff first
#define ss second
int node[1002][1001];
bool vis[1001][1001];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main()
{
    int i,j,k,l,m,n,row,col,sx,sy,tx,ty,ux,uy;


    while(scanf("%d %d",&row,&col)&&row&&col)
    {
        memset(node,0,sizeof(node));
        memset(vis,0,sizeof(vis));
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d %d",&i,&k);

            while(k--)
            {
                scanf("%d",&j);
                //node[i][j]=1;
                vis[i][j]=1;
            }
        }
        scanf("%d %d",&sx,&sy);
        scanf("%d %d",&tx,&ty);

        queue<li> q;
        li ll;

        q.push(li(sx,sy));
        vis[sx][sy]=1;

        while(!q.empty())
        {
            ll=q.front();
            q.pop();

            for(i=0;i<4;i++)
            {
                n=ll.ff+dx[i];
                m=ll.ss+dy[i];
                if(n>=0&&m>=0&&vis[n][m]!=1&&n<row&&m<col)
                {
                    node[n][m]=node[ll.ff][ll.ss]+1;
                    q.push(li(n,m));
                    vis[n][m]=1;
                }
            }

            if(vis[tx][ty]==1)
                break;

        }
        printf("%d\n",node[tx][ty]);



    }
}
