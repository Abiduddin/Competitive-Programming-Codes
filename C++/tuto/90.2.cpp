/// IO ios member use

#include <iostream>
using namespace std;

int main()
{
    cout<<12.23<<endl;
    cout<<2.3<<endl;
    cout.setf(ios::scientific);
    cout<<12.23<<endl;
    cout<<2.3<<endl;
    cout.setf(ios::uppercase);
    cout<<12.23<<endl;
    cout<<2.3<<endl;
    cout.setf(ios::showpos);
    cout<<12.23<<endl;
    cout<<2.3<<endl;
    cout.unsetf(ios::uppercase);
    cout<<12.23<<endl;
    cout<<2.3<<endl;
    cout.unsetf(ios::showpos);
    cout<<12.23<<endl;
    cout<<2.3<<endl;
    cout.unsetf(ios::scientific);
    cout<<12.23<<endl;
    cout<<2.3<<endl;


    return 0;
}
