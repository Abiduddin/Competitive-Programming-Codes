               /// friend function

#include <iostream>
using namespace std;
class cost;
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
    friend int totalcost(rectangle A,cost B);
};

class cost
{
    int costrate;
public:
    void setvalue(int a)
    {
        costrate=a;
    }
    friend int totalcost(rectangle A,cost B);
};

int totalcost(rectangle A,cost B)
    {
        return B.costrate*A.height*A.width;
    }

int main()
{
    rectangle obj;
    obj.set(5,6);
    cost c;
    c.setvalue(200);
    cout<<obj.area()<<endl;
    cout<<totalcost(obj,c)<<endl;
    return 0;
}
