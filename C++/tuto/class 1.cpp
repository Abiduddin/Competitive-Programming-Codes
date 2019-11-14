#include <iostream>

using namespace std;

class rectangle
{
public:
    int height;
    int width;
};

int main()
{
    rectangle ob;
    ob.height=5;
    ob.width=6;

    cout<<"Area : "<<ob.height*ob.width<<endl;

    return 0;
}
