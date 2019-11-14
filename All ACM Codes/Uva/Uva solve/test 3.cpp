/// file modes out,in,app

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("test.txt",ios::app);

    if(!out) cout<<"cannot create file"<<endl;
    else
    {
        out<<" pakhi kakhi";
        out.close();
    }

    return 0;
}
