#include <iostream>
using namespace std;

int add(int a,int b);
int add(int a, int b,int c);
double add(double a, double b);
double add(int a,double b);
double add(double a,int b);
double add(float a,int b);

int main()
{
    cout<<add(5,7)<<endl;
    cout<<add(7,8,9)<<endl;
    cout<<add(12.5,23.2)<<endl;
    cout<<add(2,6.3)<<endl;
    cout<<add(5.67,2)<<endl;
    cout<<add(2.12,7)<<endl;
    return 0;
}
int add(int a,int b)
{
    return (a+b);
}
int add(int a,int b,int c)
{
    return (a+b+c);
}
double add(double a,double b)
{
    return (a+b);
}
double add(int a,double b)
{
    return (a+b);
}
double add(double a,int b)
{
    return (a+b);
}
double add(float a,int b)
{
    return (a+b);
}
