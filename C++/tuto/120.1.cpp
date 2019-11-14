///  file seekg(), seekp()


#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    ofstream out("test.txt"),out2("test2.txt");

    if(!out||!out2) cout<<"cannot open file"<<endl;
    else
    {
        out.seekp(5);
        out<<"world";
        out2<<"small_world";

        out.close();
        out2.close();
    }

    ifstream in("test2.txt");

    if(!in) cout<<"cannot open file"<<endl;
    else
    {
        char a[100];
        in.seekg(3);
        in>>a;
        cout<<a;

        in.close();
    }
}
