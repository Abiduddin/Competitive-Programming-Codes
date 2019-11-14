#include <stdio.h>

int main()
{
    register int m,t;
    int i,j,k;
    scanf("%d",&t);

    while(t--)
    {
        m=0;
        scanf("%d%d%d",&i,&j,&k);
        i=i+j;
        while(1)
        {

            if(i>=k)
            {
               i=i-k+1;
               m++;
            }
            else
                break;
        }
        printf("%d\n",m);
    }
    return 0;

}
