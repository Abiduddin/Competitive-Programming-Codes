/// file open and close

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("test.txt");

    if(out)
        cout<<"File open"<<endl;
    else
        cout<<"Cannot file open"<<endl;
    out.close();

    ifstream in;
    in.open("test.txt");
    if(in)
        cout<<"File open"<<endl;
    else
        cout<<"Cannot open file"<<endl;
    in.close();

    return 0;
}
