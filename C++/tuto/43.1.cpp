#include <iostream>
using namespace std;
class abc
{
    int x,y;
public:
    abc(){x=0,y=0;}
    abc(int a,int b){x=a,y=b;}
    abc(int a) {x=a,y=0;}
    void get(int &a,int &b){a=x;b=y;}
    void set(int a,int b){x=a;y=b;}
    void print(){cout<<"x: "<<x<<endl<<"y: "<<y<<endl;}

    operator int()
    {
        return x+y;
    }

};

class abc1
{
    int x;
public:
    abc1(){x=0;}
    abc1(int a){x=a;}
    void get(int &a){a=x;}
    void set(int a){x=a;}
    void print(){cout<<"x: "<<x<<endl;}

    operator abc()
    {
        abc tmp(x);
        return tmp;
    }

};


int main()
{
    abc ob1(1,4),ob2(5,3),ob3;
    abc1 n1;
    /// build -> class
    int a=5;
    ob1=a;
    ob1.print();

    /// class -> build
    int b;
    b=ob2;
    cout<<endl<<"b: "<<b<<endl<<endl;

    /// class -> class
    n1=7;
    ob1=n1;
    ob1.print();

    return 0;

}
