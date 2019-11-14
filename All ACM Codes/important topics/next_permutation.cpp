#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int > v;

    for(int i=0;i<10;i++)
        v.push_back(i);
    do{

        cout<<v[0]<<" "<<v[1]<<" "<< v[2]<<" "<<v[3]<<endl;
    }while(next_permutation(v.begin(),v.end()));
}
