/*Destructor*/

#include<iostream>
#include <cstdlib>
using namespace std;

int count=0;

class des
{
    public:
        des()
        {
            count++;
            cout<<"\n No of object created:"<<count<<endl;
        }
        ~des()
        {
            cout<<"\n No of object destroyed:"<<count<<endl;
            count--;
        }


};
int main()
{
    des A,B,C;
    return 0;

}
