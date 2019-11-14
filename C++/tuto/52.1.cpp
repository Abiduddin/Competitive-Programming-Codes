#include <iostream>
using namespace std;

class info
{
    int id;
    int mark;
public:
    void getid(){cin>>id; cout<<id<<endl;}
    void getmark(){cin>>mark; cout<<mark<<endl;}
};

class result : private info
{
public:
    void print(){getmark();}
};

class student : private info
{
public:
    void print(){getid();}
};

int main()
{
    student ob1;
    ob1.print();

    result ob2;
    ob2.print();
    return 0;
}
