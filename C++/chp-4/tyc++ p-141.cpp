#include <iostream>
using namespace std;

void f(int &n);

int main()
{
    int i=0;
    cout<<"i's value: "<<i<<endl;
    f(i);

    cout<<"Here is i's new value: "<<i<<endl;
    return 0;
}

void f(int &n)
{
    n=100;
}
