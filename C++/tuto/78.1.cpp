/// exception handling class type exception

#include <iostream>
using namespace std;

class exep
{
    int id;
    string name;
public:
    exep(int i,string n) {id=i, name=n;}
    void print() {cout<<"Error id: "<<id<<" "<<name<<endl;}
};

void positive(int a)
{
    try{
    if(a<1) throw exep(a,"Not a positive number");
    cout<<a<<endl;
    }
    catch(exep e){
        e.print();
    }



}


int main()
{
    try
    {
        positive(5);
        positive(-5);
        positive(6);
    }
    catch(int e)
    {
        cout<<"Exception "<<e<<endl;
    }

    return 0;
}
