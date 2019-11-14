#include <iostream>
using namespace std;


template <class T>
class abc
{
    T a;
public:
    abc(){}
    abc(T x) {a=x;}

    void set(T x);
    void print(){cout<<a<<endl;}
};

template <class T>
void abc<T>::set(T x)
{
    a=x;
}

int main()
{
    abc<int> ob(58);
    ob.print();

    abc<double> ob1(12.98);
    ob1.print();
    ob.set(45.678);
    ob.print();

    abc<string> ob2("abid uddin");
    ob2.print();
}
