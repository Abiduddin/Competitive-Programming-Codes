#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num,n,i;
    printf("How many integer number? : ");
    scanf("%d",&n);
    num=(int *)malloc(n*sizeof(int));
    printf("Enter %d inputs : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    find_max(num,n);
    find_min(num,n);
}
int find_max(int num[],int n)
{
    int max,i;
    max=num[0];
    for(i=1;i<n;i++)
        if(max<num[i])
        max=num[i];
    printf("Maximum number is: %d",max);
}
int find_min(int num[],int n)
{
    int min,i;
    min=num[0];
    for(i=1;i<n;i++)
        if(min>num[i])
        min=num[i];
    printf("Minimum number is : %d",min);
}
