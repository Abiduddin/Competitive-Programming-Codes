#include <iostream>
using namespace std;

class ab
{
    int a,b;
public:
    ab(){}
    ab(int i,int j)
    {
        cout<<"constructor "<<endl;
        a=i;
        b=j;
        show();
    }
    ~ab()
    {
        cout<<"destructor "<<endl;
        show();
    }
    void show(void)
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    ab ba1,ba2(3,5),ba4(5,8);

   /* ba1.show();
    ba2.show();
    ba4.show();
    */
    return 0;
}
