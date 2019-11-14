#include <stdio.h>

int max(int a[],int n)
{
    //int m;
    if(n==0) return a[0];
    else
    {
        if(a[0]<a[n])
            a[0]=a[n];
        return max(a,n-1);
    }
}

int main()
{
    int i,j,a[100];

    scanf("%d",&j);

    for(i=0;i<j;i++)
        scanf("%d",&a[i]);

    printf("%d\n",max(a,j-1));
}
