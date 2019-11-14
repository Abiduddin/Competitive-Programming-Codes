#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> mypq;

    for(int i=0;i<10;i++)
    {
        int j;
        cin>>j;
        mypq.push(j);
    }
    for(int i=0;i<10;i++){

        cout<<mypq.top()<<endl;
        mypq.pop();

    }
}
