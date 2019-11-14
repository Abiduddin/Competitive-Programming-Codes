#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1("hello world");

    char a[1000];
    strcpy(a,s1.c_str());
    cout<<a<<"\n";

    return 0;
}
