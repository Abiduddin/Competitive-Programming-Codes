/*
cosx= 1-x^2/2!+x^4/4!......== (k=0,n) ((-1)^k * x^(2*k))/(2*k)!


*/


#include <stdio.h>
#include <math.h>

int main()
{
    double i,j,k,l,n,m,p;
    double a,b,d;

    printf("Enter x and n: ");
    scanf("%lf%lf",&l,&n);
    m=n;
    b=0;
    for(n=0;n<=m;n++)
    {

    p=2*n;

    a=1;
    for(i=1;i<=p;i++)
        a=a*i;

    d=(((pow((-1),n))*(pow(l,(2*n))))/a);
    b=b+d;

    }
    printf("%.2lf\n",b);
}
