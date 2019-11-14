#include <cstdio>

int main()
{
    double a,b;
    register int t,c=0;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf",&a,&b);
        printf("Case %d: %.2f\n",++c,(a+(b*5/9)));
    }
    return 0;
}
