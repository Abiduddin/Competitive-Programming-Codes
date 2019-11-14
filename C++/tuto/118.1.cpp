/// file EOF


#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ifstream in;
    in.open("test.txt");

    if(!in) cout<<"cann't open file"<<endl;
    else
    {
        char str[100];

        while(!in.eof())
        {
            in.getline(str,100);
            cout<<str<<endl;
        }

        in.close();
    }

    return 0;
}
