#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<char> v;

    v.push_back('a');
    v.push_back('3');
    v.push_back('r');
    v.push_back('*');


    for(size_t i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<string> v1;
    string s;
    v1.push_back("i am");
    v1.push_back("Abid Uddin");
    cout<<"Enter a string: ";
    getline(cin,s);
    v1.push_back(s);

    for(size_t i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<"\n";
    }
    cout<<endl;

}
