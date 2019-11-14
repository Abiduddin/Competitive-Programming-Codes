/// IO formated input

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cin.getline(str,sizeof(str)); /// it's default => cin.getline(str,sizeof(str),'\n');
    cout<<str<<endl;
    cin.getline(str,sizeof(str),'.'); /// it's take before get .
    cout<<str<<endl;

    return 0;
}
