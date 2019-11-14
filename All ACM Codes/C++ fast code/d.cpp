#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    pair<int, int> p;

    p={1,2};
    p={4,3};
    p={2,3};
    
    // for(auto i: p){
    //     cout<<i.first()<<" ";
    // }

    cout<<p.first<<" "<<p.second<<endl;


    vector<pair<int, int>> vp;

    vp.push_back(make_pair(1,2));
    vp.push_back(make_pair(4, 2));
    vp.push_back(make_pair(6, 2));
    vp.push_back(make_pair(7, 2));
    vp.push_back(make_pair(88, 2));

    for(auto i : vp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    


    return 0;
}