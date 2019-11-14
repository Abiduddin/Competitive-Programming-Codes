#include <iostream>
using namespace std;

int add (int a,int b)
{
    return a+b;
}
double add (double a, double b)
{
    return a+b;
}
string add (string a,string b)
{
    return a+b;
}
float add (float a,float b)
{
    return a+b;
}


int main()
{
    cout<<add(5,6)<<endl;
    cout<<add(4.34,89.4)<<endl;
    cout<<add("Abid ","Uddin")<<endl;
    cout<<add((float)2.44,(float)1.22)<<endl;

    return 0;
}
