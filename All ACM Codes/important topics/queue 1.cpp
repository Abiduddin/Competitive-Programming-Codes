#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    for(int i=1;i<=5;i++)
        q.push(i);


    for( ; !q.empty() ; )
    {
        cout<<"front: "<<q.front()<<endl;
        cout<<"back: "<<q.back()<<endl;
        q.pop();

    }

    return 0;
}
