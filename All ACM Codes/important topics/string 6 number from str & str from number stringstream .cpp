#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s2;

    s2="3.14169";
    float x;
    stringstream ss;
    ss<<s2;
    ss>>x;
    cout<<x<<endl;

    ss.clear();
    ss<<x;
    ss>>s2;

    cout<<s2;

    return 0;
}
