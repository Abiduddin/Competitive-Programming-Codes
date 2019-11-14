#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v,v2;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(70);
    v.push_back(88);

    v.insert(v.begin(),100);
    v.insert(v.begin()+3,900);

    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


}
