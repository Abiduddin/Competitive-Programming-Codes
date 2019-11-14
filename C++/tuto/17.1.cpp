               /// array of objects

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


int main()
{
    rectangle obj;
    rectangle *p;

    obj.set(3,4);

    cout<<obj.area()<<endl;
    p=&obj;

    p->set(23,2);
    cout<<obj.area()<<endl;

    obj.set(2,4);
    cout<<obj.area()<<endl;
    cout<<p->area()<<endl;
}
