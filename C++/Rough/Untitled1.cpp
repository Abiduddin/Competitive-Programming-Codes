#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> qu,pr;
    int i,j,k,l,n,arr[100];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];

    qu.push(arr[0]);

    for(i=1;i<n;i++)
    {
        j=qu.size();
        k=0;
        for(l=0;l<j&&l<4;l++)
        {
            if(qu.front()==arr[i])
                k=1;
        }
        if(k==0)
        {
            qu.pop();
            qu.push(arr[i]);
        }
        j=qu.size();
        pr=qu;
        for(l=0;l<j&&l<4;l++)
        {
            cout<<pr.front()<<" ";
            pr.pop();
        }
        if(k==1)
            cout<<"T"<<endl;
        else
            cout<<"F"<<endl;



    }

    return 0;
}
