/// exception handling multiple catch statements

#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"Try"<<endl;
        throw 1.44;
    }
    catch(int a)
    {
        cout<<"exception(int) "<<a<<endl;
    }
    catch(double a)
    {
        cout<<"exception(double) "<<a<<endl;
    }

    return 0;

}
