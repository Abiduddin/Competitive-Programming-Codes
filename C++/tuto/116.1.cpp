/// file write, read


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct student
{
    char name[30];
    int sid;
};

int main()
{
    struct student a,b;

    strcpy(a.name,"Abid");
    a.sid=987;

    ofstream out("info.txt");
    if(!out) cout<<"cann't open file"<<endl;
    else
    {
        out.write((char *)&a, sizeof(struct student));

        out.close();
    }

    ifstream in("info.txt");
    if(!in) cout<<"cann't open file"<<endl;
    else
    {
        in.read((char *)&b, sizeof(struct student));
        cout<<"Name: "<<b.name<<"\nId: "<<b.sid<<endl;

        in.close();
    }

    return 0;

}
