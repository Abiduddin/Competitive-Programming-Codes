/// random topics explicit constructor


#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    abc(int a){x=a;}
};

int main()
{
    abc ob(4),ob1=90;
    cout<<ob.x<<endl<<ob1.x<<endl;
}
