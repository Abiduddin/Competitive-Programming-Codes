#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v,v2;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(22);

    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v2=v;
    for(size_t i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}
