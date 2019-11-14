#include <stdio.h>


int main()
{
    long long l;

    while(scanf("%lld",&l)!=EOF)
    {
        if(l<0)
            break;
        l=((l*(l+1))/2)+1;
        printf("%lld\n",l);
    }
}
