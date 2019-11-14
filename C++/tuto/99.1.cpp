/// IO manipulation default,fixed,scientific


#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a=123.00;
    double b=123.23;

    cout<<"default"<<endl;
    cout<<a<<" "<<b<<endl;

    cout<<"fixed"<<endl;
    cout<<fixed<<a<<" "<<b<<endl;

    cout<<"scientific"<<endl;
    cout<<scientific<<a<<" "<<b<<endl;

    return 0;
}
