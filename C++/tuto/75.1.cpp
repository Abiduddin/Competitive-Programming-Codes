/// exception handing codecvt

#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"Try"<<endl;
        throw 1;
    }
    catch (int e)
    {
        cout<<"Catch "<<e<<endl;
    }
    return 0;

}
