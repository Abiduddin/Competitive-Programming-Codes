        /// reference

#include <iostream>
using namespace std;

int main()
{
    int i;
    i=5;
    cout<<i<<endl;

    int *p;
    p=&i;
    cout<<*p<<endl;

    int& r=i;
    cout<<r<<endl;

    return 0;
}
