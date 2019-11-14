#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=-1,word,total,t,l;
    string str,str1,str2,key;

    cin>>t;
    getchar();

    while(t--)
    {

        getline(cin,str);
        cin>>word;
        getchar();
        l=word;
        total=0;
        while(l--)
        {
            cin>>key;
            str1=" is called "+key+".";
            str2=" is known as "+key+".";

            while(str.find(str1)!=-1||str.find(str2)!=-1)
            {

                if(str.find(str1)!=-1)
                {
                    k=str.find(str1);
                }
                else
                {
                    k=str.find(str2);
                }
                //cout<<"Found "<<key<<endl;
                int cnt=0,wr=k;
                //k--;

                for(;str[k]!='.'&&k>0;k--)
                {
                    if(str[k]==' '&&isalpha(str[k-1]))
                        cnt++;

                }

                if(cnt>=2)
                {
                    total++;
                    //cout<<"Found "<<key<<endl;
                    break;
                }

                str[wr]='f';
            }

        }
        cout<<total<<endl;
    }
}
