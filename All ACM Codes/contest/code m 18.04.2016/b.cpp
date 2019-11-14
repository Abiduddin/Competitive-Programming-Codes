#include <bits/stdc++.h>
#include <stdio.h>

int main()
{
    long int j,t,p,c=0,k,l;
    int a[100000];
    a[0]=0;

    scanf("%ld",&t);
    while(t--)
    {
        l=0;
        scanf("%ld%ld",&j,&k);

        for(p=1;p<=k;p++)
        {
            a[p]=(a[p-1]^p);
        }
        for(p=j;p<=k;p++)
        {
           l=l+a[p];
        }
        printf("%ld\n",l);
    }

    return 0;
}

