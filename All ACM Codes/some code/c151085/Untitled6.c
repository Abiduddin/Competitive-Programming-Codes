#include <stdio.h>

int main()
{
    int a[100]={12,33,44,1,2,3};
    int i,j,k,l,p=0;
    l=6;
    for(i=0;i<l;i++)
        for(j=i;j<l;j++)
        if(a[i]>a[j])

    {
        p++;
        k=a[i];
        a[i]=a[j];
        a[j]=k;
    }
    for(k=0;k<l;k++)
        printf("%d ",a[k]);

        printf("\n%d",p);
}
