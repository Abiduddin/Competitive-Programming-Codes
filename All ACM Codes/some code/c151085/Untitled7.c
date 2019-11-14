#include <stdio.h>

int main()
{
    int a[100]={12,33,44,1,2,3};
    int i,j,k,l,p=0;
    l=6;
    for(i=0;i<l;i++)
        for(j=0;j<=l-1;j++)
        if(a[j]>a[j+1])

    {
        p++;
        k=a[j];
        a[j]=a[j+1];
        a[j+1]=k;
    }
    for(k=0;k<l;k++)
        printf("%d ",a[k]);

        printf("\n%d",p);
}
