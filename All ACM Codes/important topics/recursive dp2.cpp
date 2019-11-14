#include <stdio.h>
long int a[20];

long int fact(long int i)
{
    long int j;
    if(i==0||i==1) return 1;
    if(a[i]!=-1)
        return a[i];
    else
    {
    j=i*fact(i-1);
    a[i]=j;
    }

    return j;
}

int main()
{
    long int i,j,k,l;

    for(i=0;i<20;i++)
        a[i]=-1;

    while(scanf("%ld",&i)!=EOF)
    {
        j=fact(i);
        printf("%ld\n",j);
    }
    return 0;
}
