#include <stdio.h>
void main()
{
    int a,b,c,d,e,f,g,h,tk,of;

    printf("Welcome to Money Calculator!!! \nWe offer our best for You..........................\n");
    while(of!=0) {
    printf("\n\nFirst enter the number of 2 TAKA: ");
    scanf("%d", &a);
    printf("Please enter the number of 5 TAKA: ");
    scanf("%d", &b);
    printf("Please enter the number of 10 TAKA: ");
    scanf("%d", &c);
    printf("Please enter the number of 20 TAKA: ");
    scanf("%d", &d);
    printf("Please enter the number of 50 TAKA: ");
    scanf("%d", &e);
    printf("Please enter the number of 100 TAKA: ");
    scanf("%d", &f);
    printf("Please enter the number of 500 TAKA: ");
    scanf("%d", &g);
    printf("Please enter the number of 1000 TAKA: ");
    scanf("%d", &h);
    tk=((a*2)+(b*5)+(c*10)+(d*20)+(e*50)+(f*100)+(g*500)+(h*1000));
    printf("\n\nYour total money is : %d TAKA", tk);
    printf("\nIf you want to stop it Press '0' :");
    scanf("%d",&of);


    }

}
