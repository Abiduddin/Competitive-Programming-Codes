#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int > simple;

    for(int i=1;i<10;i++)
    {
        simple.push_back(i*100);
        cout<<"inserting: "<<simple.back()<<endl;
    }
    cout<<"--------------------\n";

    while(!simple.empty())
    {
        cout<<"size: "<<simple.size();
        cout<<" last element: "<<simple.back()<<endl;
        simple.pop_back();
    }
    cout<<"vector empty\n";
    return 0;
}
