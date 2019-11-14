#include <stdio.h>

int gcd(int i, int j)
{
    if(i%j==0)
    {
        return j;
    }
    else
    {
        int t;
        t=i%j;
        i=j;
        j=t;
        return gcd(i,j);
    }
}

int main()
{
    int i,j;

    scanf("%d %d",&i,&j);
    printf("%d\n",((i*j)/(gcd(i,j))));
    return 0;
}
