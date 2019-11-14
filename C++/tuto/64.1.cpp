/// Template function
#include <iostream>
using namespace std;

template <class a>
a add(a b,a c)
{
    return b+c;
}

int main()
{
    int i=90,j=99;
    float k=9.78,l=232.212;

    cout<<add(i,j)<<endl;
    cout<<add(k,l)<<endl;
    cout<<add(2.99,4.89)<<endl;

    string s1="abid ",s2="uddin";
    cout<<add(s1,s2)<<endl;

}
