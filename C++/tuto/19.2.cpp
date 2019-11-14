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

rectangle scan()
{
    int i,j;
    cin>>i>>j;
    rectangle ob;
    ob.set(i,j);
    return ob;
}

int main()
{
    rectangle obj;
    obj=scan();
    print(obj);

    return 0;
}
