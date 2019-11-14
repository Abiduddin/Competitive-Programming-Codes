#include <iostream>
using namespace std;


class base
{
public:
    int a;
};

class derive:public base
{
public:
    int b;
};

int main()
{
    base b;
    derive b1;

    b.a=90;
    cout<<b.a<<endl;

    b1.b=100;
    cout<<b1.b<<endl;

    base *p;
    p=&b;
    p->a = 123;
    cout<<p->a<<endl;
    cout<<b.a<<endl;

    derive *k;
    k=&b1;
    k->b=321;
    cout<<k->b<<endl;
    cout<<b1.b<<endl;
}
