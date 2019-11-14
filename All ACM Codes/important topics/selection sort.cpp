            ///selection sort

#include <stdio.h>

int main()
{
    int i,j,k,l,a[1000],m,n;
    printf("Enter number of element: ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);

    for(i=0;i<l-1;i++)
    {
        k=i;
        for(j=i+1;j<l;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
        m=a[i];
        a[i]=a[k];
        a[k]=m;
        }
    }

    for(i=0;i<l;i++)
        printf("%d ",a[i]);
}
