/// IO ios member flags sets type 2

#include <iostream>
using namespace std;

int main()
{
    ios::fmtflags f;
    f=ios::showpos | ios::showpoint;
    cout.flags(f);
    cout<<100.1<<endl;
}
