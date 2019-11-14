#include <stdio.h>

int main()
{
    int a[80]={1,2,3,4,5,6,7,8};

    int i,j,k,l;

    int up=8;
    j=4;
    for(k=up;k>=j;k--)
    {
        a[k+1]=a[k];
    }
    a[j]=10;
    up++;
    for(k=0;k<up;k++)
        printf("%d ",a[k]);

}
