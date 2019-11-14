#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector< vector<int > > v2D;

    vector<int > temp;

    for(int i=0; i<10;i++)
    {
        temp.clear();
        for(int j=0;j<=i;j++)
        {
            temp.push_back(i+1);
        }
        v2D.push_back(temp);
    }
    for(size_t i=0;i<10;i++)
    {
        for(size_t j=0; j<v2D[i].size();j++)
        {
            cout<<v2D[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
