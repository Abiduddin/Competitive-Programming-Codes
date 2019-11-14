///function overloading and use

#include <iostream>

using namespace std;

int sum(int i=6,int j=8)
{
    return (i+j);
}
int sum1(int i,int j=90)
{
    return (i+j);
}
int sum2(int i,int j)
{
    return (i+j);
}



int main()
{
    int a,b,c;
    cout<<"Enter two integer: ";
    cin>>a>>b;
    cout<<"Sum is: "<<sum(a,b)<<endl;
    cout<<"Sum is: "<<sum(2)<<endl;
    cout<<"Sum is: "<<sum(2,90)<<endl;
    cout<<"Sum is: "<<sum1(35,78)<<endl;
    cout<<"Sum is: "<<sum1(80)<<endl;
    cout<<"Sum is: "<<sum2(7,9)<<endl;
}
