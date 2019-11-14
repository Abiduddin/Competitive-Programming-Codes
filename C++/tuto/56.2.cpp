#include <iostream>
using namespace std;

class base
{
public:
    int a;
    int get() {return a;}
};

class derive: public base
{
public:
    int a;
    int getd(){return a+get();}
};

int main()
{
    derive ob;
    ob.a=10;
    ob.base::a=220;
    cout<<ob.getd()<<endl;
}
