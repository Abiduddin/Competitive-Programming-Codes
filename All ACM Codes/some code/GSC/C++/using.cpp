#include<iostream>
using namespace std;

namespace one
{
    int a=5,b=6;
}

namespace two
{
    int a=7,b=8;
}

int main()
{
        using one::a;
        using two::b;
        cout<<"a in one="<<a<<'\n';
        cout<<"b in two="<<b<<'\n';
        cout<<"b in one="<<one::b<<'\n';
        cout<<"a in two="<<two::a<<'\n';
        return 0;
}
