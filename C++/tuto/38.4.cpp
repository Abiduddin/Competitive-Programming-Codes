#include <iostream>
using namespace std;

class abc
{
    int x;
    int y;
public:
    abc(){x=0,y=0;}
    abc(int a,int b){x=a,y=b;}

    void print(void)
    {
        cout<<x<<" "<<y<<endl;
    }

    abc operator ++ ();
    abc operator ++ (int a);
    abc operator - ();
    abc operator - (abc ob);

};

abc abc::operator ++ ()
{
    abc tmp;
    x=x+1;
    y=y+1;
    tmp.x=x;
    tmp.y=y;
    return tmp;
}

abc abc::operator ++ (int a)
{
    abc tmp;

    tmp.x=x;
    tmp.y=y;
    x=x+1;
    y=y+1;
    return tmp;
}
abc abc::operator-(abc ob)
{
    abc tmp(x-ob.x,y-ob.y);
    return tmp;
}

abc abc::operator-()
{
    abc tmp(-x,-y);
    return tmp;
}


int main()
{
    abc b1(340,90),b2(99,88),b3;

    b3.print();
    b3=b1-b2;
    b3.print();
    b3=-b2;
    b3.print();

    return 0;
}
