#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;

}
int add(int a)
{
    return a;
}
double add(double a,double b)
{
    return a+b;
}

int main()
{
    int (*p)(int ,int);
    p=add;
    cout<<p<<endl;
    cout<<p(3,7)<<endl;

    double (*r)(double,double);
    r=add;
    cout<<r<<endl;
    cout<<r(34.44,7.90)<<endl;
}
