#include <iostream>
//#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a2;

    getline(cin,a2);
    reverse(a2.begin(),a2.end());
    cout<<a2;
    return 0;
}
