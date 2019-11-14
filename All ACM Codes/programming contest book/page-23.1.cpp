#include <stdio.h>
#include <math.h>


int main()
{
    double x1,x2,y1,y2,a;

    printf("Enter first co-ordinate: ");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter second co-ordinate: ");
    scanf("%lf%lf",&x2,&y2);

    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("Distance: %.2lf\n",a);
}
