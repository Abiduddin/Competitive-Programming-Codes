               /// array of objects (constructor)

#include <iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    rectangle(int a,int b)
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
    rectangle obj[5]={{1,2},{3,4},{5,5},{2,2},{3,3}};


    for(int i=0;i<5;i++)
        cout<<"Obj "<<i<<" = "<<obj[i].area()<<endl;
}
