#include<stdio.h>

int main()
{
    int a,b,z,n;

    scanf("%d",&a);
    scanf("%d",&n);

    b = a<<n;
    z = a*pow(2,n);
    if(b == z)
        printf("Equivalent\n");
    else
        printf("Not Equivalent\n");
    return 0;
}

