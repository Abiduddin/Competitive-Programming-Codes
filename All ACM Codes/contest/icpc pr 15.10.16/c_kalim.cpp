#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,w,m,i,j,k,sum,p,q,cost,min_cost;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        char c;
        cin>>n>>m>>w;
        cin.ignore();
        if(w==0) {
             cout<<"Case "<<i<<": "<<"0"<<endl;
             continue;
        }
        char a[500][501];
        sum=0;
        for(j=0; j<n; j++)
        {
            for(k=0; k<m; k++)
            {

                c = getchar();
                a[j][k] = c;
            }
            getchar();
            a[j][k] = '\0';
        }


        for(j=0; j<n; j++)
        {
            for(k=0; k<m; k++)
            {
                min_cost=w;
                for(p=j; p>=0; p--)
                {
                    for(q=k; q>=0; q--)
                    {
                             if(p==j && q==k)
                               {
                                   if(min_cost>w)
                                    min_cost=w;
                               }
                            else if(a[p][q]==a[j][k])
                            {
                                cost=labs(p-j)+labs(q-k);
                                if(min_cost>cost)
                                    min_cost=cost;
                            }


                    }
                }
                sum+=min_cost;

            }

        }
         cout<<"Case "<<i<<": "<<sum<<endl;

    }




    return 0;
}
