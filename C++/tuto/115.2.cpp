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

    ofstream out("test.txt");

    if(!out) cout<<"cann't open file"<<endl;
    else
    {
        int i=0;
        char ch[100]="abid_khalii.com";

        while(ch[i]!='.')
        {
            out.put(ch[i]);
            i++;
        }

        out.close();
    }
}
