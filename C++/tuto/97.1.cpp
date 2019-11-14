/// IO manipulators boolalpha, noboolalpha


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool b;
    cout<<true<<endl;
    cout<<boolalpha<<true<<endl;
    cin>>boolalpha>>b;
    cout<<b<<endl;
    cout<<noboolalpha<<b<<endl;
}
