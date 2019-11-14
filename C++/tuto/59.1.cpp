#include <iostream>
using namespace std;

class base
{
public:
    int a;
    void print(){cout<<"Base"<<endl;}
};

class derive:public base
{
public:
    int b;
    void print(){cout<<"Derive"<<endl;}
};


int main()
{
    base *b1;
    derive b2;

    b1=&b2;

    b1->a=90;
    cout<<b1->a<<endl;

    b2.print();
    b1->print();


}
