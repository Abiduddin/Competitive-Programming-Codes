#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int , int> p(2,6);
    int i,j,k;

    cout<<p.first<<" "<<p.second<<endl;

    pair<int , int> pp[100];

    for(i=0,j=400,k=0;i<100;i++,j--,k++)
    {
        pp[k].first=i;
        pp[k].second=j;
    }
    for(i=0;i<=99;i++)
    {
        cout<<pp[i].first<<"  "<<pp[i].second<<endl;
    }
}
