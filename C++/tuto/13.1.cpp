/// Constructor Destructor

#include <iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int i,int j);
    int area();
    rectangle();
};
rectangle::rectangle()
{
    //return 0;
}

int rectangle::area()
{
    return height*width;
}
void rectangle::set(int i,int j)
{
    height=i;
    width=j;
}
int main()
{
    rectangle obj;
    obj.set(50,6);
    cout<<"Area= "<<obj.area()<<endl;

    return 0;
}
