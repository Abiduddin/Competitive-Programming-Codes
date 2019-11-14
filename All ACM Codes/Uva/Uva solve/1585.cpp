#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int i,j,k,l,sum;

    scanf("%d",&l);
    while(l--)
    {
        sum=0;
        cin>>st;
        k=st.length();
        j=0;
        for(i=0;i<k;i++)
        {
            if(st[i]=='O')
                j++;
            else
                j=0;
            sum+=j;
        }
        printf("%d\n",sum);
    }
}
