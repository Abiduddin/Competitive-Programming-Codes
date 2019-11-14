#include <iostream>
using namespace std;

class ac;
class ab
{
public:
    int a;
    void tk(int i)
    {
        a=i;
    }

    friend void avg(ab a1,ac a);
};
class ac
{
public:
    int a;
    void tk(int i)
    {
        a=i;
    }
    friend void avg(ab a1,ac a);
};

void avg(ab a1,ac a)
{
    cout<<"result: "<<((a1.a+a.a)/2)<<endl;
}


int main()
{
    ac a;
    ab a1;
    int i,j,k;

    cout<<"Enter 1st speed: ";
    cin>>i;
    a.tk(i);
    cout<<"Enter 2nd speed: ";
    cin>>i;
    a1.tk(i);
    avg(a1,a);

}
