/// IO manipulation showbase, noshowbase

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<hex<<showbase<<123<<endl;
    cout<<oct<<123<<endl;
    cout<<noshowbase<<123<<endl;
    cout<<33<<endl;

    return 0;
}
