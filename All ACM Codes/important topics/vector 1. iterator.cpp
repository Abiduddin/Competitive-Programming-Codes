#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector< vector<int > > v2d;

    for(int i=0;i<10;i++)
    {
        vector<int> temp;
        for(int j=0;j<=i;j++)
        {
            temp.push_back(i);
        }
        v2d.push_back(temp);
    }

    cout<<"using iterator: \n";
    vector< vector<int > > :: iterator outer;
    vector< int > :: iterator inner;
    for(outer=v2d.begin();outer!=v2d.end();outer++)
    {
        for(inner=outer->begin();inner!=outer->end();inner++)
        {
            cout<<*inner<<" ";
        }
        cout<<endl;
    }

    cout<<"\nusing indexes: \n";
    for(unsigned i=0; i<v2d.size();i++)
    {
        for(unsigned j=0; j<v2d[i].size();j++)
        {
            cout<<v2d[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
