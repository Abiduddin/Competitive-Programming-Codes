#include <iostream>
#include <cstdio>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <sstream>
using namespace std;

string to_string(int a)
{
    stringstream s;
    s<<a;
    return s.str();
}

int main()
{
    string a2,a1,a3;

    a2="i am abid";
    a2+=to_string(50);
    cout<<a2;
}
