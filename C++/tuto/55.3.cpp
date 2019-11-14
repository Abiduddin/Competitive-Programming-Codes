#include <iostream>
using namespace std;

class base
{
public:
    int a;
    base(int x) {a=x;}
};

class base2
{
public:
    int c;
    base2(int x) {c=x;};
};

class derive: public base, public base2
{
public:
    int b;
    derive(int x,int y,int z): base(50),base2(100){
        a=x;
        b=y;
        c=z;
    }
};

int main()
{
    derive ob(5,10,15);
    cout<<ob.a<<endl;
    cout<<ob.b<<endl;
    cout<<ob.c<<endl;

    return 0;
}
