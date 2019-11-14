#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("aa.txt","w",stdout);
    int i,j,k,l;


    scanf("%d",&l);
    getchar();
    while(l--)
    {
        string st;
        stack<char> stk;

        if(!getline(cin,st))
            printf("Yes\n");
        else{
        k=st.length();
        for(i=0;i<k;i++)
        {
            if(stk.empty())
            {
                stk.push(st[i]);
            }
            else if(st[i]==')'&&stk.top()=='(')
            {
                stk.pop();
            }
            else if(st[i]==']'&&stk.top()=='[')
            {
                stk.pop();
            }
            else
            {
                stk.push(st[i]);
            }
        }
        if(stk.empty())
            printf("Yes\n");
        else
            printf("No\n");
        }

        }

}
