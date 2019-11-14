               /// friend function

#include <iostream>
using namespace std;

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
        return costrate*A.area();
    }
};

int main()
{
    rectangle obj;
    obj.set(5,6);
    cost c;
    c.setvalue(100);
    cout<<"Total area "<<obj.area()<<endl;
    cout<<"Total cost "<<c.totalcost(obj)<<endl;
    return 0;
}
