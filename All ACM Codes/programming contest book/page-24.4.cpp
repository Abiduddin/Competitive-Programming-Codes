#include <stdio.h>
#include <math.h>


int main()
{
    double a,b,c;

    printf("Enter number: ");
    scanf("%lf",&a);

    b=floor(a);
    c=ceil(a);
    if((c-a)>=(a-b))
        printf("%.0lf\n",b);
    else
        printf("%.0lf\n",c);

    return 0;
}
