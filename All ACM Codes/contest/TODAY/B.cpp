#include <bits/stdc++.h>
using namespace std;

int num[600000];
int main()
{
    int i,j,k,l,n,m,n1,t;

    vector<int > prime;
    prime.push_back(1);
    prime.push_back(2);
    num[1]=1;
    num[2]=1;
    for(i=3;i<=500037;i++)
    {
        if(i%2==0)
            continue;
        k=sqrt(i)+1;
        l=0;
        for(j=3;j<=k;j++)
        {
            if(i%j==0)
            {
                l=1;
                break;
            }
        }
        if(l)
            continue;
        else{
            prime.push_back(i);
            num[i]=1;
        }
    }
    n1=prime.size();


    scanf("%d",&t);
    while(t--)
    {


        scanf("%d%d",&m,&n);


        k=0;
        if(n!=1)
        {


        for(i=0;prime[i]<=m&&i<n1;i++)
        {
            if(m%prime[i]==0)
            {

                if(prime[i]%n!=0)
                {
                    k+=prime[i];

                }
                j=m/prime[i];
                if(j%n!=0&&(j!=prime[i])&&num[j]==0)
                {
                    k+=j;
                }
            }
        }

        }
        printf("%d\n",k);


    }
    return 0;
}

