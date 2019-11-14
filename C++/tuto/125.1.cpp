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

int main()
{
    using namespace N;
    a=5;
    cout<<a<<endl;

    c ob;

    ob.x=44;
    cout<<ob.x<<endl;

    return 0;
}
