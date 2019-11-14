/// exception handling re throwing exception

#include <iostream>
using namespace std;

void excep(int a)
{
    try
    {
        if(a==1) throw 1;
    }
    catch(int e)
    {
        cout<<"Function: "<<e<<endl;
        throw;
    }
}

int main()
{
    try
    {
        excep(1);

    }
    catch(int e)
    {
        cout<<"Main "<<e<<endl;
    }
}
