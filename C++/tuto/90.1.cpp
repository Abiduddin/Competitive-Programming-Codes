/// IO ios member unset and checked_array_iterator

#include <iostream>
using namespace std;

int main()
{

    cout<<12.34<<endl;
    cout.setf(ios::scientific);
    cout<<12.34<<endl;
    cout.unsetf(ios::scientific);
    cout<<12.34<<endl;

    cout.unsetf(ios::basefield);
    cout.setf(ios::hex);
    cout<<100<<endl;

    cout.setf(ios::showbase);
    cout<<100<<endl;

    ios::fmtflags flag;

    flag = cout.flags();

    if(flag & ios::showbase)
        cout<<"showbase is set"<<endl;
    else
        cout<<"showbase is not set"<<endl;

    cout.unsetf(ios::showbase);
    flag = cout.flags();

    if(flag & ios::showbase)
        cout<<"showbase is set"<<endl;
    else
        cout<<"showbase is not set"<<endl;

    return 0;

}
