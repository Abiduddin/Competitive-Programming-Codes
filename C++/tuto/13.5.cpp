/// Constructor Destructor

#include <iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    //void set(int i,int j);
    int area();
    rectangle(int i,int j);
    ~rectangle();
};


int rectangle::area()
{
    return height*width;
}

rectangle::rectangle(int i,int j)
{
    height=i;
    width=j;
    cout<<"Constructor "<<area()<<endl;
}
rectangle::~rectangle()
{
    cout<<"Destructor "<<area()<<endl;
}

int main()
{
    rectangle obj(6,7),obj2(2,3);
    //obj.set(50,6);
    //cout<<"Area= "<<obj.area()<<endl;

    return 0;
}




