#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int t,i,j,n,a,b,max,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        max=sum=0;
        for(j=1;j<n;j++)
        {
            cin>>a>>b;
            sum+=(a-b);
            if(max<sum)
                max=sum;
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
    return 0;
}
