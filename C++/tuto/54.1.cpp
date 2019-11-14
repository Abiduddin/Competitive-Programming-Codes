#include <iostream>
using namespace std;

class base
{
public:
    int a,b,c;
};

class new1: virtual public base
{
public:
    int b;
};

class new2: virtual public base
{
public:
    int c;
};

class derive: public new1,public new2
{
public:
    void set(){cin>>a>>b>>c;}
    int add(){return a+b+c;}
};

int main()
{
    derive ob1;
    ob1.set();
    cout<<ob1.add();

}
