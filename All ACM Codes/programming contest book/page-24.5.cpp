#include <stdio.h>
#include <math.h>


int main()
{
    double x1,x2,x3,y1,y2,y3,a,s,ab,ca,bc;

    printf("Enter c-ordiantes: ");
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);

    ab=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    ca=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    bc=sqrt(pow(x2-x3,2)+pow(y2-y3,2));

    s=(ab+ca+bc)/2;
    a=sqrt(s*(s-ab)*(s-bc)*(s-ca));
    printf("Area: %.2lf\n",a);

    return 0;
}
