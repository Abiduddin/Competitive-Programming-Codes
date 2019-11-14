#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,c;
    vector<int> v1,v2;
    cin>>t;

    while(t--)
    {
       vector<int> v1,v2;
       cin>>c;
       while(c--)
       {
           cin>>l;
           v1.push_back(l);
       }
       v2=v1;
       sort(v2.begin(),v2.end());

       cin>>c;
       while(c--)
       {
           cin>>i>>j;
           v1[i]=j;
       }
    }

}
