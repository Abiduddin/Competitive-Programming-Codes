#include <stdio.h>

int main()
{
    int a[100];
    int i,j,k,l,p=0;

    printf("How many number: ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);

    for(j=0;j<i-1;j++)
        for(k=0;k<i-j-1;k++)
    {
        if(a[k]>a[k+1])
        {
            p++;
            l=a[k];
            a[k]=a[k+1];
            a[k+1]=l;
        }
    }
    for(j=0;j<i;j++)
        printf("%d ",a[j]);
    printf("\n%d",p);
}
