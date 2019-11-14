#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    int a=5,b=3;
    ch=getche();
    printf("\nIts %c\n",ch);
    switch(ch)
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
    }
}
