#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.pop_back();
    v[0]=44;
    cout<<v.capacity()<<"\n";
    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
