#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> v;

    v.push_back(10);
    v.push_back(12);
    v.push_back(14);
    cout<<"push_back()"<<endl;
    for(size_t i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    cout<<endl;

    cout<<"push_front()"<<endl;
    v.push_front(6);
    v.push_front(7);
    v.push_front(9);

    for(size_t i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    cout<<"pop_back()"<<endl;
    v.pop_back();
    v.pop_back();

    for(size_t i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    cout<<"pop_front()"<<endl;
    v.pop_front();
    v.pop_front();

    for(size_t i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
