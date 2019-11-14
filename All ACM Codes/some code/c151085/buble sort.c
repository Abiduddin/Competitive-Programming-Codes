#include <stdio.h>
int main()
{
    int i,j,k,n,f=0;
    int a[100];
    printf("How many values: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
                f++;
            }
        }
    }
    printf("Sort(A to Z) : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n\tTotal Swap happened: %d times\n",f);
    return 0;
}
