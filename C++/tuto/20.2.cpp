               /// friend function

#include <iostream>
using namespace std;
/// class cost;
class rectangle
{
    int height;
    int width;
public:

    void set(int a,int b)
    {
        height=a;
        width=b;
    }

    int area()
    {
        return height*width;
    }
    friend class cost;
};

class cost
{
    int costrate;
public:
    void setvalue(int a)
    {
        costrate=a;
    }
    int totalcost(rectangle A)
    {
        return costrate*A.height*A.width;
    }
};

int main()
{
    rectangle obj;
    obj.set(5,6);
    cost c;
    c.setvalue(100);
    cout<<obj.area()<<endl;
    cout<<c.totalcost(obj)<<endl;
    return 0;
}
