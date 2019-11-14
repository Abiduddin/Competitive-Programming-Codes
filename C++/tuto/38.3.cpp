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


int main()
{
    abc b1(340,90),b2(99,88),b3;

    cout<<"b1 before "; b1.print();
    ++b1;
    cout<<"b1 after ";b1.print();
    b1++;
    cout<<"b1 after ";b1.print();

    b3= ++b1;
    b3.print();
    b3=b1++;
    b3.print();
    b1.print();

    return 0;
}
