#include <stdio.h>
#include <math.h>


int main()
{
    int n,m,i;

    scanf("%d",&n);
    m=0;
    for(i=1;i<=n;i++)
        m=m+pow(i,i);

    printf("%d\n",m);

}
