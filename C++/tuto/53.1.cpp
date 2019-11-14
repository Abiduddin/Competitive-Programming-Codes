#include <iostream>
using namespace std;

class info
{
    int id;
public:
    int getid(){cout<<"Enter id -> ";cin>>id; return id;}
};

class lab
{
    int lmark;
public:
    int getlmark(){cout<<"Enter lab mark -> ";cin>>lmark; return lmark;}
};

class exam : public lab
{
    int mark;
public:
    int getmark(){cout<<"Enter mark -> ";cin>>mark; return mark+getlmark();}
};

class result : private info, private exam
{
public:
    void getresult()
    {
        int sid = getid();
        int res = getmark();
        cout<<"Id -> "<<sid<<" Result -> "<<res<<endl;
    }
};


int main()
{
    result ob1;
    ob1.getresult();
}
