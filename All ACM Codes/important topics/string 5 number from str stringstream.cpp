#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s2;

    s2="123.45";
    float x;
    stringstream ss;
    ss<<s2;
    ss>>x;

    cout<<x;
}
