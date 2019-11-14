            ///selection sort

#include <stdio.h>

int main()
{
    int i,j,k,l,a[1000],m,n;
    printf("Enter number of element: ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);

    for(i=1;i<l;i++)
    {
        m=a[i];
        n=i;
        while(n>0&&a[n-1]>m)
        {
            a[n]=a[n-1];
            n--;
        }
        a[n]=m;
    }

    for(i=0;i<l;i++)
        printf("%d ",a[i]);
}
