#include <iostream>
using namespace std;

class abc
{
public:
    static int a;
    static int b;
    static void fun(void)
    {
        cout<<++a<<" "<<++b<<endl;

    }
    abc()
    {
        a=0;
        b=0;
    }
};

int abc::a;
int abc::b;

int main()
{
    abc ob1,ob2;

    ob1.fun();
    ob1.fun();
    ob2.fun();
    ob2.fun();

    return 0;
}
