#include <stdio.h>

int main()
{
    int i,j,k,l,mid,max,low;
    int a[100];
    printf("Enter number of element: ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);

    printf("Enter number what you want to search: ");
    scanf("%d",&k);
    low=0;
    max=i-1;
    mid=max/2;

    for( ;low<=max;mid=(low+max)/2)
    {
        if(k==a[mid])
        {
            printf("Found in index %d\n",mid);
            break;
        }
        else if(k<a[mid])
        {
            max=mid-1;

        }
        else if(k>a[mid])
        {
            low=mid+1;
        }
    }
    return 0;
}
