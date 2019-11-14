#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,ar,s;

    printf("Enter 3 arms : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf\n",ar);

    return 0;
}
