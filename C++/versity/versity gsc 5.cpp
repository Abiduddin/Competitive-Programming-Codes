///scope resolution operator(::) for access global variables

#include <iostream>

using namespace std;

int p=20;/// global p

int main()
{
    int p=5;/// p declared again, local to main
    {
        int k=::p;/// assign the value of global p to k
        int a=p;///assign the value of local p to k
        int p=7;/// p declared again, local to inner block
        cout<<endl<<"Inner Block"<<endl;
        cout<<"k= "<<k<<endl;
        cout<<"a= "<<a<<endl;
        cout<<"Local to inner block, p="<<p<<endl;
        cout<<"Global p= "<<::p<<endl;
    }

    cout<<endl<<endl<<"Outer block"<<endl;
    cout<<"p= "<<p<<endl;
    cout<<"Global p= "<<::p<<endl;
    return 0;
}
