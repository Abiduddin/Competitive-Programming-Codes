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

    bool operator != (abc ob);
};

bool abc::operator != (abc ob)
{
    return (x+y)!=(ob.x+ob.y);
}

int main()
{
    abc o1(16,9),o2(8,3),o3;

    if(o1!=o2)
        cout<<"not equal"<<endl;
    else
        cout<<"equal"<<endl;

    return 0;
}
