/// file tellg,tellp


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("test.txt");

    if(!out) cout<<"cannot open file"<<endl;
    else
    {
        cout<<out.tellp()<<endl;
        out<<"hello world";
        cout<<out.tellp()<<endl;
        out<<"hello PC";
        cout<<out.tellp()<<endl;
        out.seekp(4);
        cout<<out.tellp()<<endl;
        out<<"hello world";
        cout<<out.tellp()<<endl;

        out.close();

    }

    ifstream in("test.txt");

    if(!in) cout<<"cannot open file"<<endl;
    else
    {
        char str[100];
        cout<<in.tellg()<<endl;

        in.seekg(10);

        cout<<in.tellg()<<endl;

        in>>str;
        cout<<str<<endl;
        cout<<in.tellg()<<endl;

        in>>str;
        cout<<str<<endl;
        cout<<in.tellg()<<endl;

        in.close();
    }
    return 0;
}
