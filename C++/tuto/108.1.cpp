/// IO custom extractor >>

#include <iostream>
#include <iomanip>
using namespace std;

class student
{
public:
    int id;
    string name;

    student(){}
    student(int i,string n){id=i; name=n;}
};

ostream &operator << (ostream &stream, student s)
{
    stream <<s.name<<" "<<s.id<<endl;
    return stream;
}

istream &operator >> (istream &stream, student &s)
{
    cout<<"Enter Name: ";
    stream>>s.name;
    cout<<"Enter Id: ";
    stream>>s.id;

    return stream;
}

int main()
{
    student s1,s2;
    cin>>s1;
    cout<<s1;
    cin>>s2;
    cout<<s2;

    return 0;
}
