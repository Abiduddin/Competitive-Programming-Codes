#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=10,y=20;

    printf("x is %i\n",x);
    printf("y is %i\n",y);
    printf("swapping......\n");

    swap(&x,&y);

    printf("swapped.\n");
    printf("x is %i\n",x);
    printf("y is %i\n",y);
}

void swap(int *a,int *b)
{
    int temp=*a;
    printf("temp =%i\n",temp);
    //temp=a;
    printf("temp =%i\n",temp);
    *a=*b;
    *b=temp;
    printf("temp =%i\n",temp);
    //printf("a =%i\nb =%i\n",a,b);

}

