#include <iostream>
using namespace std;

class abc
{
    int x,arr[5];
public:
    abc() {x=1;
        for(int i=1;i<=5;i++)
            arr[i-1]=i*x;
    }
    abc(int a) {
        x=a;
        for(int i=1;i<=5;i++)
            arr[i-1]=i*x;
        }
    void get(int &a) {a=x;}
    void set(int a) {x=a;}
    void print() {cout<<x<<endl;}

    int operator [] (int a);

};

int abc::operator [] (int a)
{
    return arr[a-1];
}



int main()
{
    abc b1(4),b2(9),b3;

    cout<<b1[4]<<endl;

    return 0;
}
