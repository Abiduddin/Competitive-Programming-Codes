/// IO custom insertion <<

#include <iostream>
#include <iomanip>
using namespace std;

class student
{
    public:
    int sid;
    string name;

    student(){}
    student(int i,string n){sid=i; name=n;}
};

ostream &operator << (ostream &stream, student s)
{
    stream<<s.name<<" "<<s.sid<<endl;

    return stream;
}

int main()
{
    student s0(0,"NAME"),s1(1,"abid"),s2(2,"abir"),s3(3,"akib");

    cout<<s0<<s1<<s2<<s3<<endl;

}
