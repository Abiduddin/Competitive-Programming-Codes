/// New & Delete

#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr=new int(5);
    cout<<*ptr<<endl;
    *ptr=55;
    cout<<*ptr<<endl;
    delete(ptr);
    return 0;
}
