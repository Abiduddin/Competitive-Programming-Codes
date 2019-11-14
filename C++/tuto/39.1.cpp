#include <iostream>
using namespace std;

class abc
{
    int x,y;
public:
    abc() {x=0,y=0;}
    abc(int a,int b) {x=a,y=b;}
    void get(int &a,int &b) {a=x,b=y;}
    void set(int a,int b) {x=a,y=b;}
    void print() {cout<<x<<" "<<y<<endl;}

    abc operator = (abc ob);

};

abc abc::operator = (abc ob)
{
    x=ob.x;
    y=ob.y;
}

int main()
{
    abc b1(4,8),b2(9,7),b3;

    b1.print();
    b2.print();
    b1=b2;
    b1.print();
    b2.print();

    return 0;
}
