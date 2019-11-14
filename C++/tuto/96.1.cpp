/// IO manipulator ws, skipws, noskipws


#include <iostream>
using namespace std;

int main()
{
    char a,b,c,d;
    cin>>a;

    cin>>noskipws>>b;
    cin>>ws>>c;
    cin>>d;
    cout<<(int)a<<endl<<(int)b<<endl<<(int)c<<endl<<(int)d<<endl;

    return 0;
}
