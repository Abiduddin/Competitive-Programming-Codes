#include <iostream>
using namespace std;

class base
{
public:
    int x,y;
    void get()
    {
        cout<<"Enter value of id and mark:"<<endl;
        cin>>x>>y;
    }
};

class inbase
{
public:
    char a[10];
    void name()
    {
        cout<<"Enter name: ";
        cin>>a;
    }
};

class dri:public base,public inbase
{
    public:
    void pt()
    {
        cout<<"name: "<<a<<endl<<"id: "<<x<<endl<<"mark: "<<y<<endl;

    }
};


int main()
{
    dri ob1;
    ob1.get();
    ob1.name();
    ob1.pt();
}
