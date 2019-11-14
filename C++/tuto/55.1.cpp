#include <iostream>
using namespace std;

class base
{
public:
    int a;
    base(int x) {a=x;}
};

class derive: public base
{
public:
    int b;
    derive(int y): base(50){
        b=y;
    }
};

int main()
{
    derive ob(5);
    cout<<ob.a<<endl;
    cout<<ob.b<<endl;

    return 0;
}
