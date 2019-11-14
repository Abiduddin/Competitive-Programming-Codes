#include <iostream>
using namespace std;

class student
{
public:
    int  roll;
    int mark;
};

class result: protected student
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


    ob.get();
    ob.print();
    return 0;
}
