#include <cstdio>

int main()
{
    int i,j,k,l,aa[100];
    printf("Enter number of element: ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&aa[j]);

    for(j=0;j<i-1;j++)
        for(k=0;k<(i-j-1);k++)
    {
        if(aa[k]>aa[k+1])
        {
            l=aa[k];
            aa[k]=aa[k+1];
            aa[k+1]=l;
        }
    }
    for(j=0;j<i;j++)
        printf("%d ",aa[j]);

    return 0;
}
