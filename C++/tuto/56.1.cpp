#include <iostream>
using namespace std;

class base
{
public:
    int a;
};

class derive: public base
{
public:
    int a;
};


int main()
{
    derive ob;
    ob.a=5;
    cout<<ob.a<<endl;

    return 0;
}
