#include <stdio.h>
int main()
{
    int *p,x[4]={1,2,3,4};
    for(p=x;p<x+4;p++)
        printf("%d ",++(*p));
    return 0;
}
