#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int > s;

    int i,j,k;
    cin>>i;
    while(i--)
    {
        cin>>j;
        s.insert(j);
    }


    set<int> ::iterator it;

    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;

    return 0;
}
