#include <stdio.h>

int main()
{
    int i,j,k,l;
    int a[2][2]={{1,2},{3,4}},b[2][1]={{5},{10}},c[2][1];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
    {
        c[i][j]=0;
        for(k=0;k<2;k++)
        c[i][j]=(c[i][j]+a[i][k]*b[k][j]);
    }
    for(i=0;i<2;i++){
        for(j=0;j<1;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
return 0;

}
