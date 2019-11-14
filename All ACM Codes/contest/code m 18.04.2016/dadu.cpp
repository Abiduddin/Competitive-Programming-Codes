/// dadu
#include <stdio.h>

int main()
{
    long int i,j,t,p,c=0,k,l;
    scanf("%ld",&t);
    while(t--)
    {
        k=1;
        j=0;
        scanf("%ld",&i);
        if(i<1)
            j=0;
        else
        {
            for(p=0,l=0;p<i;p++,l=l+2)
            {
                k=k+(l*3);
                //k=k+1;
                j=j+k;

            }
        }
        printf("Case %ld: %ld %ld\n",++c,k,j);

    }
    return 0;
}

