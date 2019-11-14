#include<iostream>
#include<cstdio>
using namespace std;

void  add(int i = 3, float j = 2.5);

int main()
{   freopen("p.out","w",stdout);
    cout<<"\n";
    add(3.4);
}

void add(int i, float j)
{
    cout<<(i+j);
}
