#include <stdio.h>

int num[10000],temp[10000];

void marge(int lo,int hi)
{
    if(lo==hi)
        return ;
    int mid=(lo+hi)/2;

    marge(lo,mid);
    marge(mid+1,hi);

    int i,j,k;

    for(i=lo,j=mid+1,k=lo;k<=hi;k++)
    {
        if(i==mid+1)
            temp[k]=num[j++];
        else if(j==hi+1)
            temp[k]=num[i++];
        else if(num[i]<num[j])
            temp[k]=num[i++];
        else
            temp[k]=num[j++];
    }

    for(k=lo;k<=hi;k++)
        num[k]=temp[k];
}


int main()
{
    int i,j,k;

    scanf("%d",&k);
    for(i=0;i<k;i++)
        scanf("%d",&num[i]);
    marge(0,k-1);

    for(i=0;i<k;i++)
        printf("%d ",num[i]);
    printf("\n");
}
