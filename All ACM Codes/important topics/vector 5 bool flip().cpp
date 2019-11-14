#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<bool> v;

    v.push_back(10);
    v.push_back(1);
    v.push_back(0);
    v.push_back(70);
    v.push_back(0);


    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.flip();

    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
