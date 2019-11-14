#include <stdio.h>
#include <math.h>
int main()
{
    int i,k,l;
    float a,b,c;

    i=2;
    k=pow(i,4);
    printf("%d pow(%d,4) = %d\n",i,i,k);
    k=sqrt(k);
    printf("k sqrt(k) = %d\n",k);
    a=5.76;
    printf("%f celi() is %f\n",a,ceil(a));
    printf("%f floor() is %f\n",a,floor(a));
    printf("cos 90 is %f\n",cos(90));
    printf("sin 90 is %f\n",sin(90));
    printf("tan 45 is %f\n",tan(45));
    return 0;
}
