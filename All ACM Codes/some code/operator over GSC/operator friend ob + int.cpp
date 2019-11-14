#include <iostream>
using namespace std;

class abc
{
    int x,y;
public:
    abc(){x=0,y=0;}
    abc(int i,int j){x=i,y=j;}
    void print(void)
    {
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
    }

    friend abc operator + (abc b1,int a);
};

abc operator + (abc b1,int a)
{
    abc temp;
    temp.x=a+b1.x;
    temp.y=a+b1.y;
    return temp;
}

int main()
{
    abc o1(9,6),o2(4,2),o3;

    o1=o1+12;
    o1.print();
    o3=o2+40;
    o3.print();
}
