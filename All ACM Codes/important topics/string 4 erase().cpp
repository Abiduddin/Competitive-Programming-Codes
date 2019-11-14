#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("hello world");
    string s2(s1,3);

    s1.erase(2 ,4);
    cout<<s1<<endl;

    return 0;
}
