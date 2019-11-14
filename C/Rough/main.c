#include <stdio.h>
void main()
{
    int n,x,y,f;
    int factorial(int n);
    x=20;y=5;
    //gotoxy(x,y);
    cprintf("Enter the integer number:");
    cscanf("%d",&n);
    f=factorial(n);
    x=20;y=6;
    gotoxy(x,y);
    cprintf("The factorial is : %d",f);
}
int factorial(int n)
{
    if(n<=1) return(1);
    else
        return(n*factorial(n-1));
}
