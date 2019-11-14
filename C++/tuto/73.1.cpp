/// template class default argument


#include <iostream>
using namespace std;

template <class T=int,int size=10>
class abc
{
    T x[size];
public:
    void print() {cout<<sizeof(x)<<endl;}
};

int main()
{
    abc<> ob;
    ob.print();
}
