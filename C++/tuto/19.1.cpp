               /// object in function

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

void print(rectangle abc)
{
    cout<<"area is "<<abc.area()<<endl;
}

int main()
{
    rectangle obj;
    obj.set(5,6);
    print(obj);

    return 0;
}
