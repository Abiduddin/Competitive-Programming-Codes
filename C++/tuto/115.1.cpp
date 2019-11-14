/// file put,get

#include <iostream>
#include <fstream>
using namespace std;


int main()
{

    ifstream in("test.txt");

    if(!in) cout<<"Cann't open file"<<endl;
    else
    {
        while(in)
        {
            char ch;
            in.get(ch);
            if(in) cout<<ch;
        }

        in.close();
    }
}
