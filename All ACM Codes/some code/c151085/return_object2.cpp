#include <iostream>
using namespace std;

class math
{
    int m,n;
public:
    void input_data(int a,int b) {m=a,n=b;}
    void show(math c1)
    {
        cout<<"m: "<<c1.m<<" ,";
        cout<<"n: "<<c1.n<<endl;
    }
    math add(math,math);

};

math math::add(math d1,math d2)
{
    math d3;
    d3.m=d1.m+d2.m;
    d3.n=d1.n+d2.n;
    return(d3);

}

int main()
{
    math A,B,C;
    int i,j;
    cout<<"Object A\n";
    cout<<"Enter two integer: ";
    cin>>i>>j;
    A.input_data(i,j);
    cout<<"Object B\n";
    cout<<"Enter Two integer: ";
    cin>>i>>j;
    B.input_data(i,j);
    C=C.add(A,B);
    cout<<"A= ";
    A.show(A);
    cout<<"B= ";
    B.show(B);
    cout<<"C= ";
    C.show(C);
    return 0;
}

