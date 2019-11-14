#include <iostream>
using namespace std;
class ac;
class ab
{
    int sp;
public:
    void asn(int i)
    {
        sp=i;
    }
    friend void avg (ab b1,ac b2);

};

class ac
{
    int p;
public:
    void asn(int i)
    {
        p=i;
    }
    friend void avg (ab b1,ac b2);


};

void avg(ab b1,ac b2)
{
    cout<<"The average: "<<((b1.sp+b2.p)/2)<<endl;
}


int main()
{
    ab b1;
    ac b2;
    int a;
    cout<<"Enter 1st speed: ";
    cin>>a;
    b1.asn(a);
    cout<<"Enter 2nd speed: ";
    cin>>a;
    b2.asn(a);

    avg(b1,b2);

    return 0;

}

