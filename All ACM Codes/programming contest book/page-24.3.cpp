#include <stdio.h>
#include <math.h>

int main()
{
    double r,a,pi;

    pi=acos(-1);

    printf("Enter radius of circle:  ");
    scanf("%lf",&r);
    a=2*pi*r;
    printf("%lf\n",a);
    return 0;
}
