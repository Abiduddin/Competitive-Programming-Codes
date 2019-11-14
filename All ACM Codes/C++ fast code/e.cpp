#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> st;
    st.insert(3);
    st.insert(5);
    st.insert(4);
    st.insert(1);
    st.insert(2);
    st.insert(3);


    for(auto i : st){
        cout<<i<<" ";
    }

    auto i = st.find(3);

    cout<<*i<<endl;

}