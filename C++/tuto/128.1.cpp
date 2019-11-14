/// random topics conversion function

#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int y;

    abc(int a,int b) {x=a;y=b;}

    operator int () {return x+y;}
};

int main()
{
    abc ob(11,22);
    int a=ob;
    cout<<a<<endl;

    return 0;
}
