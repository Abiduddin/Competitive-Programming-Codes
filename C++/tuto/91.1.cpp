/// IO ios member setf advance


#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::showpos|ios::showpoint);
    cout<<1.23<<endl;

    cout.unsetf(ios::showpos|ios::showpoint);
    cout<<1.23<<endl;

    cout.setf(ios::hex | ios::showbase, ios::basefield | ios::showbase);
    cout<<100<<endl;

}
