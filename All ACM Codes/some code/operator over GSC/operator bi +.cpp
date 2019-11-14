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

    abc operator + (abc ob);
};

abc abc::operator + (abc ob)
{
    x= x+ob.x;
    y= y+ob.y;
    return *this;
}

int main()
{
    abc o1(7,0),o2(8,3),o3;

    o3=o1+o2;
    o3.print();
    return 0;
}
