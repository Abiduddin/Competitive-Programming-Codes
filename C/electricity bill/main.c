#include <stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f",&a);
    b=a*5.14;
    c=200*5.14+(a-200)*5.63;
    d=200*5.14+200*5.63+(a-400)*8.70;
    e=200*5.14+200*5.63+200*8.70+(a-600)*9.98;

    if(a>=200&&a<=400){
        a=c;
        //printf("Your bill is : %f\n",a);
    }
    else if(a>=400&&a<=600){
        a=d;
       // printf("Your bill is : %f\n",a);
    }
    else if(a>600){
        a=e;
        if(a>8000){
            a=a+a*.15;
        }
       // printf("Your bill is : %f\n",a);

    }
    else
        a=b;
        //printf("Your bill is : %f\n",a);

    a=a+15+10;

    printf("Your bill is : %f\n",a);
}
