#include <bits/stdc++.h>
using namespace std;

vector<int > v[201];
int color[201];
int visited[201];
int bfs(int s,int n)
{
    for(int i=0;i<n;i++)
        visited[i]=0;
    queue<int> q;
    q.push(s);
    visited[s]=1;
    color[s]=1;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int i=0;i<v[u].size();i++){
            int vr=v[u][i];
            if(!visited[v[u][i]])
            {
                visited[vr]=1;
                (color[u]==1)?color[vr]=2:color[vr]=1;
                q.push(vr);
            }
            if(color[vr]==color[u])
                return 0;


        }
    }
    return 1;
}


int main()
{
    int i,j,k,l,t,n,e,mx,lx;

    while(scanf("%d",&n)&&n)
    {

        for(i=0;i<n;i++)
            v[i].clear();

        scanf("%d",&e);
        while(e--)
        {
            scanf("%d %d",&k,&l);
            v[k].push_back(l);
            v[l].push_back(k);


        }
        if(bfs(0,n))
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");

    }


}
