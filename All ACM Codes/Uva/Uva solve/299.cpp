#include <stdio.h>

int main()
{
    int i,j,k,l,a[200],t1,t2,n;

    scanf("%d",&t1);
    while(t1--)
    {
        n=0;
        scanf("%d",&t2);
        for(i=0;i<t2;i++)
            scanf("%d",&a[i]);
        for(j=0;j<t2-1;j++)
            for(k=0;k<t2-1-j;k++)
            if(a[k]>a[k+1])
        {
            l=a[k];
            a[k]=a[k+1];
            a[k+1]=l;
            n++;
        }
        printf("Optimal train swapping takes %d swaps.\n",n);

    }
    return 0;
}
