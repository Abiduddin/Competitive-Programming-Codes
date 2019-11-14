#include <iostream>
using namespace std;

class abc
{
    int x;
    int y;
public:
    abc(){x=0,y=0;}
    abc(int a,int b){x=a,y=b;}

    void print(void){cout<<x<<" "<<y<<endl;}

    abc operator - (abc ob);
    bool operator < (abc ob);
};

abc abc::operator - (abc ob)
{
    abc tm;
    tm.x=x-ob.x;
    tm.y=y-ob.y;

    return tm;
}

bool abc::operator < (abc ob)
{
    return (x+y)<(ob.x+ob.y);
}

int main()
{
    abc b1(340,90),b2(99,88),b3;

    b3=b1-b2;
    b3.print();
    b3=b2-b1;
    b3.print();

    if(b1<b2)
        cout<<"b2 is big one"<<endl;
    else
        cout<<"b1 is big one"<<endl;

    return 0;
}
