
/// New & Delete

#include <iostream>

using namespace std;

int main()
{
    //int i;
    int *ptr;
    ptr=new int[5];
    cout<<"Enter 5 integer: ";
    for(int i=0;i<5;i++)
        cin>>ptr[i];
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i]<<" "<<*(ptr+i)<<endl;
    }
    //cout<<*ptr<<endl;
    delete [] ptr;
    return 0;
}
