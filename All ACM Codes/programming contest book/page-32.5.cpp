#include<stdio.h>

int main()
{
    int i,j,k,l;
    double a;

    scanf("%d",&l);
    a=1;
    for(i=1;i<=l;i++)
        a=a*i;

    printf("%.0lf",a);
}
