#include <stdio.h>

int main()
{
    int a[100];
    int i,j,k,l;
    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);
        printf("Even: ");
    for(j=0;j<i;j++){
        if(a[j]%2==0)
            printf("%d ",a[j]);
    }
            printf("\nOdd: ");
    for(j=0;j<i;j++){
        if(a[j]%2!=0)
            printf("%d ",a[j]);
    }
}
