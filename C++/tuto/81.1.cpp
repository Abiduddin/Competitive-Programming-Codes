/// exception handling catch all exception

#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a;
        cin>>a;
        if(a==1) throw 1;
        if(a==2) throw 1.2;
        if(a==3) throw "tech";

    }
    catch(...)
    {
        cout<<"exception"<<endl;
    }

        try
    {
        int a;
        cin>>a;
        if(a==1) throw 1;
        if(a==2) throw 1.2;
        if(a==3) throw "tech";

    }
    catch(int a)
    {
        cout<<"Int exception"<<endl;
    }
    catch(...)
    {
        cout<<"exception"<<endl;
    }


}
