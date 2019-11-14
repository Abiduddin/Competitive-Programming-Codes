#include <iostream>
using namespace std;

class sum
{
    int a,b;

public:
     void get(int i,int j)
     {
         a=i;
         b=j;
     }
     void show(void)
     {
         cout<<"sum is "<<a+b<<endl;
     }
};

int main()
{
    sum ob1,ob2;

    ob1.get(11,23);
    ob1.show();
    ob2=ob1;
    ob2.show();
    return 0;
}
