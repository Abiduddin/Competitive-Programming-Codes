#include <iostream>

using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int i,int j);
    int area();

};
void rectangle::set(int i,int j)
{
    height=i;
    width=j;
}

inline int rectangle::area()
{
    return height*width;
}

int main()
{
    rectangle ob;
    ob.set(5,6);
    cout<<"Area : "<<ob.area()<<endl;

    return 0;
}


