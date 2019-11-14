/// 110 IO custom manipulation

#include <iostream>
using namespace std;

ostream &sethex(ostream &stream)
{
    stream.setf(ios::showbase|ios::hex);
    return stream;
}

ostream &hr(ostream &stream)
{
    stream<<"\n-------------------------------\n";
    return stream;
}

int main()
{
    cout<<hex<<123<<endl;
    cout<<sethex<<123<<endl;
    cout<<hr<<"techsharif.com"<<hr;

    return 0;
}

