#include <bits/stdc++.h>
using namespace std;

bool HasPairWithSum(const vector<int>& data, int sum)
{
    int low = 0;
    int hi = data.size()-1;
    while(low<hi){
        int s = data[low] + data[hi];
        if(s== sum) return true;
    }
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(4);
    cout<<"hello"<<endl;;
    cout<<HasPairWithSum(arr,8);

    return 0;
}
