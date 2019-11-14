///using namespace as global variable

#include <iostream>

using namespace std;

void f1();

namespace var
{
    int s=5;
}

using namespace var;

int main()
{
    cout<<"Within main(),s= "<<s<<endl;
    f1();
    return 0;

}
void f1()
{
    cout<<"Within f1(),s= "<<s;
}
