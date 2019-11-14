#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d=1,min;
    cout<<"Enter Two number: ";
    cin>>a>>b;
    min=(a<b)?a:b;
    for(c=2;c<=min;c++)
        if((a%c==0)&&(b%c==0))
    {
        d=0;
        cout<<"The lowest common denominator is "<<c<<endl;
        break;
    }
    if(d)
    cout<<"No common denominator"<<endl;
    return 0;


}
