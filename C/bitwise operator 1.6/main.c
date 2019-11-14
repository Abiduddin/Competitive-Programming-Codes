#include <stdio.h>

int main()
{
    int i,j,k;
    i=222;
    j=567;
    k=687;
    i<<1;
    printf("%d ",i);
    i<<=2;
    j<<=3;
    k>>=4;
    printf("%d %d %d",i,j,k);
    return 0;
}
