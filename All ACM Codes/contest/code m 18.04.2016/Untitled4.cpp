
#include <bits/stdc++.h>
#include <stdio.h>

int main()
{
    long int j,t,p,c=0,k,l;
    long int a[100000]={0};
    //a[0]=0;

    scanf("%ld",&t);
    while(t--)
    {
        l=0;
        scanf("%ld%ld",&j,&k);


        printf("%ld\n",j^k^(j+k)/2);
    }

    return 0;
}


