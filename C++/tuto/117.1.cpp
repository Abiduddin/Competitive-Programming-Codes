/// file getline


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in;
    in.open("test.txt");

    if(!in) cout<<"cannot open file"<<endl;
    else
    {
        char str[100];
        in.getline(str,100);

        cout<<str;
        in.close();
    }
}
