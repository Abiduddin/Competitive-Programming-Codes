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
    int (*k)(int);

    k=add;
    p=add;
    cout<<p<<endl;
    cout<<p(4,5)<<endl;

    cout<<k(10)<<endl;
    return 0;
}
