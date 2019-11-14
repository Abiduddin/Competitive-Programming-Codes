#include <stdio.h>

int main()
{
    int i,j,k,gcd;

    while(scanf("%d%d",&i,&j)!=EOF)
    {
        if(i==0)
            gcd=j;
        else if(j==0)
            gcd=i;
        else
        {
            while(j!=0)
            {
                k=j;
                j=i%j;
                i=k;
            }
            gcd=i;
        }
        printf("GCD is %d\n",gcd);
    }
    return 0;
}
