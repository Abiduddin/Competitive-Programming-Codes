#include <stdio.h>
#include <math.h>

int main()
{
    double i,j,k;
    while(scanf("%lf%lf",&i,&j)!=EOF)
    {
        //i=1/i;
        k=powl(j,1/i);
        printf("%.0lf\n",k);

    }
    return 0;
}
