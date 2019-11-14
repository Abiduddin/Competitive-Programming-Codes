#include <stdio.h>
#include <math.h>

int main()
{

    double a,b,c,s,ar,t1,t2,t3,pi;
    pi=acos(-1);

    printf("Enter 3 arms of triangle: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));

    t1=asin((2*ar)/(a*b))*(180/pi);
    t2=asin((2*ar)/(c*b))*(180/pi);
    t3=(asin((2*ar)/(a*c)))*(180/pi);
    //t3=sin(.22);

    printf("answer: %.2lf  %.2lf  %.2lf",t1,t2,t3);

    return 0;
}
