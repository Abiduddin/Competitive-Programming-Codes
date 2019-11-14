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

    friend abc operator + (abc b1,abc b2);
};

abc operator + (abc b1,abc b2)
{
    abc temp;
    temp.x=b1.x+b2.x;
    temp.y=b1.y+b2.y;
    return temp;
}

int main()
{
    abc o1(9,6),o2(4,2),o3;

    o3=o1+o2;
    o3.print();
}
