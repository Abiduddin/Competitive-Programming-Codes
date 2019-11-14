#include <stdio.h>
int main()
{
    int i,j,t,n,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Ascending order: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
