///pure virtual function


#include <iostream>
using namespace std;

class sound
{
public:
    virtual void print()=0;

};

class dog: public sound
{
public:
    void print(){cout<<"Ghew"<<endl;}
};

class cat: public sound
{
public:
    void print(){cout<<"Meau"<<endl;}
};

int main()
{

    dog dob;
    cat cob;

    sound *p1;
    p1=&dob;
    p1->print();

    p1=&cob;
    p1->print();

    return 0;
}
