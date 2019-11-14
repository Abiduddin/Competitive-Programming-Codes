#include <iostream>
#include <string>


using namespace std;

int main()
{
    string s1("hello world");
    string s2(s1,3);
    string s3(3, 'a'),s4(10,'r');

    cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl;

    string s5=s2+' '+s3;

    cout<<s5<<endl;

    return 0;

}
