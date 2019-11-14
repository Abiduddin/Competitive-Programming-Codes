#include <iostream>
using namespace std;

class sum
{
    int i,j;
public:

    void get(int a,int b);
    int put()
    {
        return(i+j);
    }
};
void sum::get(int a,int b)
{
    i=a;
    j=b;
}

int main()
{
    sum ob1;
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    ob1.get(a,b);
    cout<<"Sum is: "<<ob1.put()<<endl;
    return 0;
}
