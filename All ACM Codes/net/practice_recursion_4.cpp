#include <stdio.h>

void ser(int i)
{
    if(i<0)
        return ;

    ser(i-1);

    if(i==0)
        printf("1 ");
    else if(i==1)
        printf("+ x ");
    else
        printf("+ x^%d ",i);
}

int main()
{
    int i;

    scanf("%d",&i);
    ser(i-1);
}

