#include <stdio.h>


int main()
{
    long long l,i,k,j;

    while(scanf("%lld",&l)!=EOF)
    {
        if(l<0)
            break;
        k=1;
        j=0;
        i=0;
        while(l!=0)
        {
            i=l%3;
            l=l/3;
            j=j+i*k;
            k=k*10;
        }
        printf("%lld\n",j);
    }
}
