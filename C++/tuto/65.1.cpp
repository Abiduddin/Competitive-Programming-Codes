#include <iostream>
using namespace std;

template <class T>
void print(T a)
{
    cout<<a<<endl;
}

int main()
{
    print(2);
    print(33.2332);
    print("Md. Abid Uddin");
    print('a');

    return 0;
}
