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

    friend abc operator + (int a,abc b2);
};

abc operator + (int a,abc b2)
{
    abc temp;
    temp.x=a+b2.x;
    temp.y=a+b2.y;
    return temp;
}

int main()
{
    abc o1(9,6),o2(4,2),o3;

    o1=3+o1;
    o1.print();
    o3=90+o2;
    o3.print();
}
