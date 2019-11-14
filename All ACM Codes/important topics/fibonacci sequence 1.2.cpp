#include <stdio.h>

int main()
{
    long long int a[1000],i,j,k,l;

    a[0]=0;
    a[1]=1;

    for(i=2;i<40;i++)
    {
        a[i]=(a[i-1]+a[i-2]);
    }
    for(i=0;i<40;i++)
        printf("%d number element : %lld\n",i+1,a[i]);
}
