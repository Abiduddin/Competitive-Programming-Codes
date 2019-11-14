#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

inline string to_string(int a)
{
    stringstream s;
    s<<a;
    return s.str();
}

int main()
{
    string a4;
    int i,j,k,l1,l2;

    while(getline(cin,a4))
    {
        string a1,a2,a3;
        l1=a4.length();
        i=0;
        j=0;
        while(a4[i]!=',')
        {
            a1+=a4[i++];
        }
        i++;
        while(a4[i]!='\0')
        {
            a2+=a4[i++];
        }


        reverse(a1.begin(),a1.end());
        reverse(a2.begin(),a2.end());

        l1=a1.length()-1;
        l2=a2.length()-1;
        k=0;

        for( ; l2>=0&&l1>=0 ; l1--,l2--)
        {
            i=a1[l1]+a2[l2]-96+k;
            k=0;
            if(i>=10)
            {
                k=i/10;
                a3+=to_string(i%10);

            }
            else
            {

                a3+=to_string(i);
            }
        }
        if(l2>=0)
            {
                while(l2>=0)
                {
                    i=a2[l2]-48+k;
                    k=0;
                    if(i>=10)
                    {
                        k=i/10;
                        a3+=to_string(i%10);
                    }
                    else
                    {
                        a3+=to_string(i);
                    }
                    l2--;
                }

            }
        else if(l1>=0)
            {
                while(l1>=0)
                {
                    i=a1[l1]-48+k;
                    k=0;
                    if(i>=10)
                    {
                        k=i/10;
                        a3+=to_string(i%10);
                    }
                    else
                    {
                        a3+=to_string(i);
                    }
                    l1--;
                }

            }



        if(k!=0)
        a3+=to_string(k);

        l1=a3.length();
        i=0;
        while(a3[i]=='0')
            i++;
        while(a3[i]!='\0')
        {
            cout<<a3[i++];
        }
        cout<<"\n";
    }
    return 0;
}

