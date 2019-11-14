/// Template function override

#include <iostream>
using namespace std;

template <class T1>
void print(T1 a)
{
    cout<<a<<endl;
}
void print(double a)
{
    cout<<"override"<<endl;
}

int main()
{
    print(4);
    print(4.334);
    print("Hello");
    print(987654321);

    return 0;
}
