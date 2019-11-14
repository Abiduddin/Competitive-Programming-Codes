
//Template: Generic Function
#include<iostream>
using namespace std;

template<class T> void swaper(T &a, T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int i=10, j=20;
    float x=20.4, y=16.33;
    swaper(i,j);
    swaper(x,y);
    cout<<"Swapped i, j: "<<i<<" "<<j<<endl;
    cout<<"Swapped x, y: "<<x<<" "<<y<<endl;
    return 0;
}
