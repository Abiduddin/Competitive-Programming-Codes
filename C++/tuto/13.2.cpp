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
    rectangle();
};


int rectangle::area()
{
    return height*width;
}

rectangle::rectangle()
{
    height=20;
    width=03;
}
int main()
{
    rectangle obj;
    //obj.set(50,6);
    cout<<"Area= "<<obj.area()<<endl;

    return 0;
}

