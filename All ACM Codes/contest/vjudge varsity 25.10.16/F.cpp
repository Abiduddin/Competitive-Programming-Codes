#include <bits/stdc++.h>
using namespace std;

int a[2000];
int main()
{
    //register int i;
    int j,i,k,l,m,n,p;
    vector<int> v;


    v.push_back(2);

    for(i=3;i<1050;i++)
    {
        k=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                k=0;
                break;
            }
        }
        if(k){
            v.push_back(i);
            a[i]=1;
        }
    }


    k=1;

    for(i=1;i<=1000000;i++)
    {
        k=1;
        for(j=0;v[j]*v[j]<=i;j++)
        {
            if(i%v[j]==0)
            {
                k=k*((i/v[j])+1);
            }
        }
        for(m=0;v[m]*v[m]<=k;m++)
        {
            if(k%v[j]==0&&a[k/v[j]]==1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }




    return 0;
}
