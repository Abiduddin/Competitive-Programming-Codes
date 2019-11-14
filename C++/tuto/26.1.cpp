#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;

}

double add(double a,double b)
{
    return (a+b)*2;
}
float add(float a,float b)
{
    return (a+b)*4;
}

int main()
{
    cout<<add(8.98,2.9)<<endl;
    float a=3.66900,b=6.8;
    cout<<add(a,b)<<endl;
    cout<<add(2,5)<<endl;
    cout<<add((float) 3.2,(float) 3.5)<<endl;
    return 0;
}
