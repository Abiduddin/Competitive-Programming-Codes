#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int num[1005][1];
int main()
{
    register int i,j;
    int k,m,n,a[1006];
    vector<int> v[34];
    k=0;
    for(i=1;i<=1000;i++)
        for(j=i;j<=1000;j+=i)
        {
            num[j][0]++;

        }


    for(i=0;i<=32;i++)
    {
        for(j=1;j<=1000;j++)
        {
            if(num[j][0]==i)
            {
                v[i].push_back(j);
            }
        }
    }
    m=1;
    for(i=0;i<=32;i++)
    {
        for(j=v[i].size()-1;j>=0;j--)
        {
            a[m++]=v[i][j];
        }
    }

    scanf("%d",&n);
    i=0;
    while(n--)
    {
        scanf("%d",&j);
        printf("Case %d: %d\n",++i,a[j]);
    }

    return 0;
}
