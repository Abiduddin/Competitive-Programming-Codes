
//#include <bits/stdc++.h>
#include <stdio.h>

int main()
{
    long int j,t,p,k,l,c,m;

    long int a[1000];
    a[0]=0;

    scanf("%ld",&t);
    while(t--)
    {
        l=0;
        scanf("%ld%ld",&j,&k);

        for(p=1,m=1;p<=k;p++,m++)
            a[p]=(a[p-1] ^ m);

        for(c=j;c<=k;c++)
           l=l+a[c];

        printf("%ld\n",l);
    }

    return 0;
}



