/// variable scope

#include <iostream>

using namespace std;
int global,a=345;
int main()
{
    int a=5;
    int h;
    cout<<a<<" "<<h<<endl;
    {
        int a=8;
        int c=78;
        cout<<a<<" "<<::a<<endl;
        cout<<c<<endl;
        {
            int a=90;
            int b=34;
            cout<<a<<endl;
            cout<<b<<" "<<c<<" "<<global<<" "<<::a<<endl;
            {
                float a=7.567;
                cout<<a<<" "<<global<<endl;
            }
        }
        for(int k=0;k<10;k++)
            cout<<k<<" ";
        cout<<endl;
        //cout<<b<<endl;
    }
    cout<<a<<endl;
//    cout<<b<<endl<<c<<endl;
    return 0;
}

