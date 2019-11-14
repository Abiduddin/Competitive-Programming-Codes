/// IO boolean input output_iterator_tag

#include <iostream>
using namespace std;

int main()
{
    bool a;
    cin.setf(ios::boolalpha);
    cin>>a;
    cout<<a<<endl;

    return 0;
}
