#include <iostream>
#include <string>


using namespace std;

int main()
{
    string s1("hello world");
    string s2(s1,3);

    cout<<"Enter string: ";
    getline(cin,s1);
    cout<<"Enter substring: ";
    cin>>s2;

    int i = s1.find(s2);
    if(i==-1)
    {
        cout<<"not found"<<endl;
        cout<<i;
    }
    else
        cout<<"Found"<<endl<<"substring position: "<<i<<endl;

    return 0;
}
