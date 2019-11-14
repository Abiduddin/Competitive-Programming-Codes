/// template class build in data types as constant


#include <iostream>
using namespace std;

template <class T,int size>
class abc
{
    T x[size];
public:
    void print() {cout<<sizeof(x)<<endl;}
};

int main()
{
    abc<int,7> ob;
    ob.print();

    abc<char,9> ob1;
    ob1.print();

    abc<double,4> ob2;
    ob2.print();
}
