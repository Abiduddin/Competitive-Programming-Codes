               /// array of objects (constructor)

#include <iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    rectangle(int a)
    {
        height=a;
        width=a;
    }
    int area()
    {
        return height*width;
    }
};


int main()
{
    rectangle obj[5]={1,2,3,4,5};


    for(int i=0;i<5;i++)
        cout<<"Obj "<<i<<" = "<<obj[i].area()<<endl;
}
