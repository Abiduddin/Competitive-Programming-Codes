
#include <iostream>
using namespace std;

class item
{
    int number;
    float cost;
public:
    void getdata(int a,float b);  /// declaration
    void putdata(void)      /// inline function, definition inside the class
   {
       cout<<"Number: "<<number<<endl;
       cout<<"Cost: "<<cost<<endl;
   }

};

void item::getdata(int a,float b)   ///outside definition
{
    number=a;
    cost=b;
}

int main()
{
    item b1;
    int i;
    float j;
    cout<<"Enter Number and Cost: ";
    cin>>i>>j;
    b1.getdata(i,j);
    b1.putdata();
    return 0;
}
