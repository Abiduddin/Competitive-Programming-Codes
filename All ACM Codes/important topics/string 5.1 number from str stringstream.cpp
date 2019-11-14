#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s2;

    s2="12345";
    int x;
    stringstream ss;
    ss<<s2;
    ss>>x;

    cout<<x;
}
