#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l;

    while(scanf("%d",&l)!=EOF)
    {
        k=0;
        if(l<1)
        {
            l=abs(l);
            l=(l*(l+1))/2;
            printf("%d\n",-(l-1));

        }
        else

        printf("%d\n",(l*(l+1))/2);

    }

    return 0;
}
