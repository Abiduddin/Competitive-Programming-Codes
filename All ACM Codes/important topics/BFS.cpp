#include <bits/stdc++.h>
using namespace std;

vector <int > adj[100];
int visited[100];
int path[100];

void bfs(int s,int n)
{
    for(int i=0;i<n;i++)
        visited[i]=0;
    queue<int> q;
    q.push(s);
    visited[s]=1;
    path[s]=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int i=0;i<adj[u].size();i++)
            if(!visited[adj[u][i]])
            {
                int v=adj[u][i];
                visited[v]=1;
                path[v]=path[u]+1;
                q.push(v);
            }
    }
}


int main()
{
    int i,j,k,l,n,s;


    printf("Number of node: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Node %d adj node number: ",i+1);
        scanf("%d",&l);
        adj[i].clear();
        for(j=0;j<l;j++)
        {
            scanf("%d",&k);
            adj[i].push_back(k-1);
        }
    }
    printf("source and destination:  ");
    while(scanf("%d %d",&s,&j)!=EOF)
    {
        memset(path,-1,sizeof(path));
        bfs(s-1,n);
        printf("shortest path : %d\n",path[j-1]);
        printf("source and destination:  ");
    }

}
