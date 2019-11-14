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
        num[i]=i;
    for(i=0;i<n;i++)
        printf("%d\n",num[i]);

}
