#include <iostream>
using namespace std;

template <class T1,class T2>
void print(T1 a,T2 b)
{
    cout<<a<<" "<<b<<endl;

}

int main()
{
    print(1,2);
    print(12.23,.232);
    print(.232,12);
    print("cat",'c');
    print(2,"cat");

    return 0;
}
