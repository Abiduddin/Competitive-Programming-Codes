#include <stdio.h>

int main()
{
    int a[80]={1,2,3,4,5,6,7,8};

    int up,i,j,k;
    j=4;
    up=8;
    for(k=j;k<=up;k++){
        a[k]=a[k+1];
    }
    up--;
    for(k=0;k<up;k++)
        printf("%d ",a[k]);
}
