#include <stdio.h>
int main()
{
    int a[10]={11,22,33,44,55,66,77,88,99,100},*b,i;
    b=a;
    for(i=0;i<10;i++)
        printf("a[%d]=%d    b[%d]=%d\n",i,a[i],i,b[i]);
    b[1]=15;
    *(b+2)=20;
    a[4]=30;
    printf("\n");
    for(i=0;i<10;i++)
        printf("a[%d]=%d     b[%d]=%d\n",i,a[i],i,b[i]);
    return 0;
}
