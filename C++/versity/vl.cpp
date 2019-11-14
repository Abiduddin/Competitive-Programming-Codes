#include <iostream>
using namespace std;

class ab
{
    int sp;
public:
    void asn(int i)
    {
        sp=i;
    }

    void dis(void)
    {
        cout<<"Value is "<<sp<<endl;
    }

    friend void add (ab b1,ab b2);


};

void add(ab b1,ab b2)
{
    cout<<b1.sp+b2.sp<<endl;
}



int main()
{
    ab b1,b2;
    int a;
    cout<<"Enter 1st velocity: ";
    cin>>a;
    b1.asn(a);
    b1.dis();
    cout<<"Enter 2nd velocity: ";
    cin>>a;
    b2.asn(a);
    b2.dis();
    add(b1,b2);


    return 0;

}
