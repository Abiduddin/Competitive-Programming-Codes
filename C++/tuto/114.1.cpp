/// file writing text

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

//    ofstream out("test.txt");
//
//    if(!out) cout<<"Cann't open file"<<endl;
//    else
//    {
//        char a[100];
//        cin.getline(a,sizeof(a));
//        out<<a;
//        out.close();
//    }
    ifstream in("test.txt");
    if(!in) cout<<"File cannot open"<<endl;
    else
    {
        string a;
        in>>a;
        cout<<a<<endl;
        in.close();
    }
}
