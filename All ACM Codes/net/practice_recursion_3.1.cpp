#include<stdio.h>

void odd(int a[],int i,int j)
{
    if(j==i) return ;

    if(a[j]%2==0)
        printf("%d ",a[j]);
    odd(a,i,j+1);
}

int main()
{
    int i,j,a[100],n;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    odd(a,n,0);

}
