/// Template Example

#include <iostream>
using namespace std;

template <class T>
void inter(T &a,T &b)
{
    T c;
    c=a;
    a=b;
    b=c;
}

class ab
{
public:
    int a=90,b=700;
    ab(int i,int j)
    {
        a=i;b=j;
    }
    ab(){
        a=90,b=700;
    }
};
class bc
{
public:
    int a=33,b=777;
};


int main()
{
    ab b1(1,2),b2(7,8);
    //bc b2;

    cout<<b1.a<<" "<<b1.b<<endl;
    cout<<b2.a<<" "<<b2.b<<endl;
    inter(b1,b2);
    cout<<b1.a<<" "<<b1.b<<endl;
    cout<<b2.a<<" "<<b2.b<<endl;

}
