/// random topics mutable


#include <iostream>
using namespace std;

class abc
{
public:
    mutable int x;

    abc() {x=4;}

    void change(int a) const {x=a;}
};

int main()
{
    abc ob;
    cout<<ob.x<<endl;
    ob.change(12);
    cout<<ob.x<<endl;
    ob.change(32);
    cout<<ob.x<<endl;

    return 0;
}
