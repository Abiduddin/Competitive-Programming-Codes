#include <stdio.h>


int main()
{
    int a,b,c,min,d=1;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    min=(a<b)?a:b;
    for(c=2;c<=min;c++)
        if((a%c==0)&&(b%c==0))
        {
            d=0;
        printf("The lowest common denominator is %d\n",c);
        break;
        }
        if(d)
            printf("No common denominators\n");

        return 0;

}
