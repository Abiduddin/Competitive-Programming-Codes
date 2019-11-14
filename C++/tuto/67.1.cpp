#include <iostream>
using namespace std;

template <class T1>
void print(T1 a)
{
    cout<<a<<endl;

}

template <class T1,class T2>
void print(T1 a,T2 b)
{
    cout<<a<<" "<<b<<endl;

}

int main()
{
    print(1);
    print(12.23,.232);
    print(.232);
    print("cat");
    print(2,"cat");

    return 0;
}
