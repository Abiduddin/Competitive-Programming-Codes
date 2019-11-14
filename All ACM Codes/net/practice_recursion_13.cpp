#include <stdio.h>

void indx(int a[],int i,int j)
{
    if(i<0)
    {
        printf("not found\n");
        return;
    }
    else if(a[i]==j)
    {
        printf("%d\n",i);

    }
    else
        indx(a,i-1,j);
}

int main()
{
    int a[100],i,j,k,l;

    scanf("%d",&i);
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);
    scanf("%d",&l);
    for(j=0;j<l;j++)
    {
        scanf("%d",&k);
        indx(a,i-1,k);
    }
}
