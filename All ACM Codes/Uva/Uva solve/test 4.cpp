/// namespace using

#include <iostream>
using namespace std;

namespace N
{
    int a;

    class c
    {
    public:
        int x;
    };

    int f1();
    int f2(){return 5;}
}

int N::f1()
{
    return 10;
}

namespace N
{
    int b;

}

int main()
{
    N::a=4;
    N::b=11;
    cout<<N::a*N::b<<endl;
    using namespace N;
    a=5;
    cout<<a*b<<endl;

    c ob;

    ob.x=34;
    cout<<ob.x<<endl;

    return 0;
}
