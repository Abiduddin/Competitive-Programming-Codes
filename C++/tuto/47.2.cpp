#include <iostream>
using namespace std;

class student
{
private:
    int  roll;
    int mark;
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

class result: private student
{
public:
    void all(){get();print();}
};

int main()
{
    result ob;


    ob.all();
    return 0;
}
