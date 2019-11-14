/// file flush

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream out;
    ifstream in;

    out.open("test.txt");
    in.open("test.txt");

    out<<"hello_cpu";
    out.flush();

    char str[100];
    in>>str;
    cout<<str;

    out.close();
    in.close();

    return 0;
}
