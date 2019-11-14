            ///finding address of functions

#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int add(int a)
{
    return a;
}

int main()
{
    int (*p)(int,int);
    p=add;
    cout<<p<<endl;
    cout<<p(4,5)<<endl;
    cout<<p(10,99)<<endl;
    return 0;
}
