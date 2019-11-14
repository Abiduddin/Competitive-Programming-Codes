#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter x to stop."<<endl;

    do{
            cout<<": ";
            cin>>ch;
    }while(ch!='x');

    return 0;
}
