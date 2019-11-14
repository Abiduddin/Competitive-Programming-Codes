#include <stdio.h>
int main()
{
    int num[20],n,i,j,temp;
    printf("How many number : ");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
    }
    printf("\nThe ascending list is: ");
    for(i=0;i<n;i++)
        printf(" %d",num[i]);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    if(num[i]<num[j]){
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
    }
    printf("\nThe descending list is: ");
    for(i=0;i<n;i++)
        printf(" %d",num[i]);
}
