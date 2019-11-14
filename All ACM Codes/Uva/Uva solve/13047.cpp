#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("aa.txt","w",stdout);
    string st;
    int i,j,k,l,m,n,t=0,c;
    char ch;

    scanf("%d",&c);
    while(c--)
    {
        cin>>st;
        int len1=-1,len2=-1;
        l=st.length();
        for(i=0;i<l;i++)
        {
            if(st[i]=='<')
            {
                m=1;

                if(i<l&&st[i+1]!='<'&&st[i+1]!='>'){
                    i++;
                    //m++;
                    ch=st[i];
                    while(i<l&&st[i]!='<'&&st[i]!='>'&&st[i]==ch)
                    {
                        i++;
                        m++;
                    }
                    i--;

                }

                if(m>len1)
                    len1=m;
            }
        }
        for(i=l-1;i>=0;i--)
        {
            if(st[i]=='>')
            {
                m=1;

                if(i<l&&st[i-1]!='<'&&st[i-1]!='>'){
                    i--;
                    //m++;
                    ch=st[i];
                    while(i>=0&&st[i]!='<'&&st[i]!='>'&&st[i]==ch)
                    {
                        i--;
                        m++;
                    }
                    i++;
                }

                if(m>len2)
                len2=m;
            }
        }


        //(len1>len2)? printf("Case %d: %d\n",++t,len1):printf("Case %d: %d\n",++t,len2);
        if(len1>len2)
            printf("Case %d: %d\n",++t,len1);
        else
            printf("Case %d: %d\n",++t,len2);
    }


}
