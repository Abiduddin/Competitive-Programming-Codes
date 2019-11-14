#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;
typedef pair<int,int> Edge;

int main()
{
    int n,e,i,j,u,v,w;
    vector<Edge> G[MAX];

    while(cin>>n>>e)
    {
        for(i=0;i<n;i++)
            G[i].clear();
        for(i=0;i<e;i++)
        {
            cin>>u>>v>>w;
            G[u].push_back(Edge(v,w));
        }

        for(i=0;i<n;i++)
        {
            cout<<"Degree of "<<i<<": "<<G[i].size()<<endl;
            cout<<"Adjacent:\n";
            for(j=0;j<(int)G[i].size();j++)
            {
                cout<<" "<<G[i][j].first<<"("<<G[i][j].second<<")\n";
            }
            cout<<endl;
        }
    }
    return 0;
}
