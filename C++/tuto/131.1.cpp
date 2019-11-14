/// random topics member initialize constructor


#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int y;

    /// abc(int a,int b) {x=a; y=b;}
    abc(int a,int b) : x(a), y(b) {}
};

int main()
{
    abc ob(3,4);
    cout<<ob.x+ob.y<<endl;

    return 0;
}
