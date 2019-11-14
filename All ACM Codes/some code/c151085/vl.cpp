#include <iostream>
using namespace std;
class ab
{
    int vl;
public:
    void asn(int i)
    {
        vl=i;
    }
    void add (ab b1,ab b2)
    {
        vl=((b1.vl+b2.vl)/2);

    }
    void dis(void)
    {
        cout<<"The average "<<vl<<endl;
    }
};

int main()
{

    ab b1,b2,b3;
    int a;
    cout<<"Enter 1st velocity: ";
    cin>>a;
    b1.asn(a);
    cout<<"Enter 2nd velocity: ";
    cin>>a;class ab

    return 0;

}
