#include <iostream>
using namespace std;
class abc
{
    int x,y;
public:
    abc(){x=0,y=0;}
    abc(int a,int b){x=a,y=b;}
    void get(int &a,int &b){a=x;b=y;}
    void set(int a,int b){x=a;y=b;}
    void print(){cout<<"x: "<<x<<endl<<"y: "<<y<<endl;}

    friend abc operator << (ostream &a, abc b)
    {
        a<<b.x<<" "<<b.y<<endl;
    }

};


int main()
{
    abc ob1(1,4),ob2(2,3),ob3;

    cout<<ob1;
    cout<<ob2;

    return 0;

}
