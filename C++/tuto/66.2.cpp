#include <iostream>
using namespace std;

template <class T1,class T2>

T1 add(T1 a,T2 b)
{
    return a+b;
}

int main()
{
    cout<<add(22,2.2323)<<endl;
    cout<<add(2.232,5)<<endl;
    cout<<add(2.232,2.2323)<<endl;
    cout<<add(22,2)<<endl;
}
