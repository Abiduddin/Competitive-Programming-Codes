/// using

#include <iostream>

using namespace std;

namespace first
{
    int x=30;
    int y=700;
}
namespace second
{
    double x=3.789;
    double y=66.787;
}

int main()
{
    using namespace first;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<second::x<<endl;
    cout<<second::y<<endl;
    return 0;
}
