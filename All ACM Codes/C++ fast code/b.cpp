#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    vector<int> v={1,2,3,4,5},v2;
    
    for(auto i: v){
        //i=34;
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        v[i]*=v[i];
    }

    cout<<endl;
    
    cout<<"Hello world"<<endl;


    for (auto i : v)
    {
        //i=34;
        cout << i << " ";
        if(i==9){
            cout<<"Found"<<endl;
        }
    }

    

    cout<<endl;
    


    

    

    return 0;
}
