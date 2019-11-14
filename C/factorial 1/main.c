#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&b);
    c=1;
    for(a=1;a<=b;a++){
        c=c*a;
    }
    printf("%d Factorial is = %d",b,c);

}
