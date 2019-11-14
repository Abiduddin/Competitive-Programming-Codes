/// file writing text

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream out("test.txt");

    if(!out) cout<<"Cann't open file"<<endl;
    else
    {
        out<<"iam a student"<<endl;
        out.close();
    }
//    ifstream in("test.txt");
//    if(!in) cout<<"File cannot open"<<endl;
//    else
//    {
//        string a;
//        in>>a;
//        cout<<a<<endl;
//    }
}
