#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ab
{
    int p;
    string a;
public:
    void tk_ps(int i);
    int ps_ck(int i);
    void name_tk(string k);
    void name_ot(void);
};

void ab::tk_ps(int i)
{
   p=i;
}
int ab::ps_ck(int i)
{
    if(p==i)
        return 1;
    else
        return 0;
}
void ab::name_tk(string k)
{
    a=k;
}
void ab::name_ot(void)
{
    cout<<"secret massage is : "<<a<<endl;
}

int main()
{
    ab s;
    int i,j=0,k;
    char d;
    string a,b,c;

    cout<<"Enter Your secret message and that's password: ";
    cin>>a>>i;
    s.name_tk(a);
    s.tk_ps(i);
    cout<<"if You want to see your secret message pass A: ";
    cin>>d;
    if('A'==toupper(d))
    {

        while(1){
        cout<<"Enter your password: ";
        cin>>i;
        if(s.ps_ck(i))
        {
            s.name_ot();
            break;
        }
        else if(j==2)
        {
            cout<<"Security Alarm!!!!"<<endl;
            break;
        }
        else
            cout<<"Password Wrong!!\nTry again"<<endl;

        j++;
}

    }

}
