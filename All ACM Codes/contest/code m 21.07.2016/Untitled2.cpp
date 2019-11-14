#include <stdio.h>

int main()
{
    register int c=0,t;
    double l,k;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf%lf",&l,&k);
        printf("Case %d: %.0lf\n",++c,(l-k-1));
    }

    return 0;
}
