#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l;
    list<int> ls1;

    ls1.push_back(5);
    ls1.push_back(53);

    for(auto i: ls1){
        cout<<i<<" ";
    }
    cout<<endl;

    ls1.push_front(3);
    ls1.push_front(33);

    for (auto i : ls1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<ls1.front()<<endl;
    cout << ls1.back() << endl;
}