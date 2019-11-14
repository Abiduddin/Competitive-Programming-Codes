#include <iostream>
using namespace std;
int volume(int);
double volume(double);
double volume(double,int);
long volume(long,int,int);

int main()
{
    cout<<volume(10)<<endl;
    cout<<volume(2.35)<<endl;
    cout<<volume(2.5,8)<<endl;
    cout<<volume(100L,75,15)<<endl;
    return 0;
}
int volume(int i)
{
    return (i*i*i);
}
double volume(double i)
{
    return (i*i*i);
}
double volume(double i,int j)
{
    return (3.141519*i*i*j);
}
long volume(long i,int j,int k)
{
    return (i*j*k);
}
