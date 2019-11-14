#include <iostream>
using namespace std;

class abc
{
    int x,y;
public:
    abc() {x=0;y=0;}
    abc(int a,int b){x=a,y=b;}
    abc(int a){x=a,y=100;}
    void get(int &a,int &b){a=x,b=y;}
    void set(int a,int b){x=a,y=b;}
    void print() {cout<<"x: "<<x<<" "<<"y: "<<y<<endl;}

};

int main()
{
    abc b1,b2(34,55),b3(770);

    cout<<"b1"<<endl;
    b1.print();
    cout<<"b2"<<endl;
    b2.print();
    cout<<"b3"<<endl;
    b3.print();
    b2=90;
    cout<<"b2"<<endl;
    b2.print();
    b1=77;
    cout<<"b1"<<endl;
    b1.print();
    b1=4,3;
    cout<<"b1"<<endl;
    b1.print();

}
