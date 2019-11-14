#include <stdio.h>

int main()
{
    freopen("aa.txt","r",stdin);
    freopen("aa1.txt","w",stdout);
    register int i;
    double a,b,c,d,f;

    scanf("%d",&i);
    while(i--)
    {
        scanf("%lf",&a);
        b=(a/10)*6;
        c=(a/5);
        d=a*b;
        f=3.141592654*c*c;
        d=d-f;
        printf("%.2lf %.2lf\n",f,d);
    }
    return 0;
}
