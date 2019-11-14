#include <iostream>
using namespace std;

class base
{
public:
    int a;
};

class new1: public base
{
public:
    int b;
};

class new2: public base
{
public:
    int c;
};

class derive: public new1,public new2
{

};

int main()
{
    derive ob1;

    ob1.new1::a=20;
    ob1.new2::a=30;

    cout<<endl<<"ob1.new1::a : "<<ob1.new1::a<<endl<<"ob1.new2::a : "<<ob1.new2::a<<endl;

    return 0;


}
