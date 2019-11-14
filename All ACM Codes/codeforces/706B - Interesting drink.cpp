#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> shop;
    int  i,j,k,l,n,m,mx,m1,sp[199999];
    int mn;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&sp[i]);

    }

    sort(sp,sp+n);
    j=0;
    mn=sp[0];
    mx=sp[n-1]+2;
    shop.push_back(j);
    for(i=1;i<=mx;i++)
    {
        while(i==sp[j])
        j++;
        shop.push_back(j);

    }

    scanf("%d",&l);

    for(i=0;i<l;i++)
    {
        scanf("%d",&k);
        m=0;
        if(k<mn)
            m=0;
        else if(k>=mx)
            m=n;
        else
        {
            m=shop[k];
        }

        printf("%d\n",m);

    }

    return 0;
}

