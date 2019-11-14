#include <bits/stdc++.h> 
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<int, int> mp;

    mp.insert(make_pair(1,44));
    mp.insert(make_pair(2, 444));
    mp.insert(make_pair(3, 4334));
    mp.insert(make_pair(5, 43334));
    mp.insert(make_pair(6, 44344));
    mp.insert(make_pair(7, 44664));



    cout<<mp[5]<<endl;

    map<pair<int, int>, string> mp1;

    mp1[make_pair(1,2)]="fdfdf";
    mp1[make_pair(1, 4)] = "fdfgfgfgfdf";
    mp1[make_pair(1, 5)] = "fdfdgfgfgggfgfgfgf";
    mp1[make_pair(1, 66)] = "fdfgfgfgfgfgfgffdf";

    cout << mp1[make_pair(1,66)] << endl;

    return 0;
}