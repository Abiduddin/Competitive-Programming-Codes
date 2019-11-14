/// Assigning object

#include <iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a,int b);
    int area();
};

inline int rectangle::area()
{
    return height*width;
}
void rectangle::set(int a,int b)
{
    height=a;
    width=b;
}
int main()
{
    rectangle ob1,ob2;
    ob1.set(2,3);
    ob2.set(5,6);

    cout<<"Area = "<<ob1.area()<<endl;
    cout<<"Area = "<<ob2.area()<<endl;
    ob1=ob2;
    cout<<"Area = "<<ob1.area()<<endl;
    cout<<"Area = "<<ob2.area()<<endl;

    return 0;
}

