/// IO boolean input output

#include <iostream>
using namespace std;

int main()
{
    bool a;
    cin.setf(ios::boolalpha);
    cout.setf(ios::boolalpha);
    cin>>a;
    cout<<a<<endl;

    return 0;
}
