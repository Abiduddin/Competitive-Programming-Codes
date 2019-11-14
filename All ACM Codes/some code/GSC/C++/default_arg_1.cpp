#include<iostream>
using namespace std;

void add(int a, int b=5);

int main()
{
    add(4);
    return 0;
}

void add(int a=5, int b)
{
    cout<<a+b;
}

