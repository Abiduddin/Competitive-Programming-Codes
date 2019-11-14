#include <iostream>

using namespace std;

class rectangle
{
public:
    int height;
    int width;
    int area();
};

inline int rectangle::area()
{
    return height*width;
}

int main()
{
    rectangle ob;
    ob.height=5;
    ob.width=6;

    cout<<"Area : "<<ob.area()<<endl;

    return 0;
}


