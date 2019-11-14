#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,n,m,n1;

    scanf("%d",&l);

    k=j=m=n1=0;

    for(i=0;i<l;i++)
    {
        scanf("%d",&n);
        if(n&1)
        {
            j++;
            m=i+1;
        }
        else
        {
            k++;
            n1=i+1;
        }
    }
    if(j==1)
        printf("%d\n",m);
    else
        printf("%d\n",n1);



    return 0;
}
