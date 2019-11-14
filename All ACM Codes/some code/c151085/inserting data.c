#include <stdio.h>
int main()
{
    int s[50],a[25],b[25];
    int n,i,j=0,k=0;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++){
        if(s[i]%2==0){
            a[j]=s[i];
            j++;
        }
        else if(s[i]%2==1){
            b[k]=s[i];
            k++;
        }
    }
    printf("\nEven: ");
    for(i=0;i<j;i++){
        printf("%d ",a[i]);
    }
    printf("\nODD: ");
    for(i=0;i<k;i++){
        printf("%d ",b[i]);
    }
    printf("\n");

    return 0;
}
