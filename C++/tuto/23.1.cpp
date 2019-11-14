#include <iostream>
using namespace std;

class abc
{
    static int a;
    int b=0;
public:

    void fun()
    {
        int c=0;
        cout<<++a<<" "<<++b<<" "<<++c<<endl;

    }
    abc()
    {
        b=0;
    }
};

int abc::a;

int main()
{
    abc ob,ob1;
    ob.fun();
    ob.fun();
    ob.fun();
    ob1.fun();
    ob1.fun();
    ob1.fun();
    return 0;
}
