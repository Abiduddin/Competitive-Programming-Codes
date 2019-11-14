/// exception handling and function

#include <iostream>
using namespace std;

void positive(int a)
{
    try{
    if(a<1) throw a;
    cout<<a<<endl;
    }
    catch(int e){
        cout<<"Exception "<<e<<endl;
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
