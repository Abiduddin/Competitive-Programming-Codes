#include <iostream>
using namespace std;

class abc
{
    int x,y;

public:
    abc(){x=0,y=0;}
    abc(int a,int b){x=a,y=b;}
    void print(void)
    {
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
    }

    abc operator ! ();
};

abc abc::operator ! ()
{
    x= !x;
    y= !y;
}

int main()
{
    abc o1(7,0),o2;

    !o1;
    o1.print();
    return 0;
}
