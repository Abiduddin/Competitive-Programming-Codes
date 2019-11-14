/// Template Example

#include <iostream>
using namespace std;

template <class T>
void inter(T &a,T &b)
{
    T c;
    c=a;
    a=b;
    b=c;
}


int main()
{
    string a="Hello",b="User";
    int a1=4,b1=7;
    double a2=21.344,b2=9.789;
    cout<<a<<" "<<b<<endl;
    inter(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<a1<<" "<<b1<<endl;
    inter(a1,b1);
    cout<<a1<<" "<<b1<<endl;
    cout<<a2<<" "<<b2<<endl;
    inter(a2,b2);
    cout<<a2<<" "<<b2<<endl;
}
