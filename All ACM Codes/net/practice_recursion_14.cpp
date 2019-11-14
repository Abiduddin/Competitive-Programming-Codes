#include <stdio.h>

void scr(int a[],int n,int i)
{

    if(n<0||a[n]<i)
    {
        printf("not found\n");
        return;
    }
    else if(a[n]==i){
        printf("%d\n",n);
        return;
    }
    else
    scr(a,n-1,i);
}

int main()
{
    int i,j,k,l,a[100];


    scanf("%d",&j);
    for(i=0;i<j;i++)
        scanf("%d",&a[i]);

    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&i);
        scr(a,j,i);
    }
}
