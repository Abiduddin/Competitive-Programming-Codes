#include<iostream>

using namespace std;

void  add();
//int  add();

int main()
{   //freopen("p.out","w",stdout);
    cout<<"\n";
    add();
    //cout<<add();
}

void add()
{
    int i=2,j=5;
    cout<<"void add(): "<<(i+j);
}

int add()
{
    int i=2,j=3;
    return (i+j)
}
