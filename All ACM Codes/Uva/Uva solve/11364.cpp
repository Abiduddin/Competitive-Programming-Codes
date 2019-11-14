#include <stdio.h>

int main()
{
    int a[120],l,t,k,m;
    register int i,j;

    scanf("%d",&t);
    while(t--)
    {
        l=0;
        scanf("%d",&k);
        for(i=0;i<k;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<k-1;i++)
            for(j=0;j<k-1-i;j++)
            if(a[j+1]<a[j])
        {
            m=a[j];
            a[j]=a[j+1];
            a[j+1]=m;
        }

        for(i=1;i<k;i++)
            l+=a[i]-a[i-1];
        l+=a[k-1]-a[0];

        printf("%d\n",l);


    }
    return 0;

}
