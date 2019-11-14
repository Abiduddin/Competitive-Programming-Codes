#include <iostream>
using namespace std;


template <class T,class T1>
class abc
{
    T a;
    T1 b;
public:
    abc(){}
    abc(T x,T1 y) {a=x; b=y;}

    void set(T x,T1 y) ; //{a=x; b=y;}
    void print(){cout<<a<<" "<<b<<endl;}
};

template <class T,class T1>
void abc<T,T1>::set(T x,T1 y)
{
    a=x;
}

int main()
{
    abc<int,string> ob(1,"name");
    ob.print();

    abc<int,double> ob2(1,1.5);
    ob2.print();
}
