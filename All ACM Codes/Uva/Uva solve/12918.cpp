#include <stdio.h>

int main()
{
    register int j,l;
    int i,k,t;
    long int m;

    scanf("%d",&t);

    while(t--)
    {
        m=0;
        scanf("%d%d",&i,&j);
        for(j=j-1,l=0;l<i;j--,l++)
        {
            m=m+j;
        }
        printf("%d\n",m);
    }
    return 0;

}

