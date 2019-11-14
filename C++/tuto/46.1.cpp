#include <iostream>
using namespace std;

class student
{
public:
    int  roll;
    int mark;
};

class result: public student
{
public:
    void get()
    {
        cin>>roll>>mark;
    }
    void print()
    {
        cout<<"roll: "<<roll<<endl<<"marks: "<<mark<<endl;
    }
};

int main()
{
    result ob;
    ob.mark=75;
    ob.roll=22;

    cout<<ob.mark<<" "<<ob.roll<<endl;

    ob.get();
    ob.print();
    return 0;
}
