///const

#include <iostream>
using namespace std;

class exampleconst
{
public:
    int a=40;
    int change (int x) const
    {
        x=a+x;
        return x;
    }
};

int main()
{
    exampleconst ob1;
    cout<<ob1.change(4)<<endl;
    return 0;

}
