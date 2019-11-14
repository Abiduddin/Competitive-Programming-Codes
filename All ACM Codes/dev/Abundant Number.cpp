#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,l,m,n,o,p,u,r,t,a[13000];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        m=0;
        for(i=0;i<n;i++)
        {
            k=1;
            for(j=2;j<a[i];j++)
            {
                if(a[i]%j==0)
                    k=k+j;
            }
            l=k-a[i];
            if(l>0&&l>=m)
            {
                if(l!=m||(l==m&&a[p]>a[i]))
                {
                    p=i;
                    m=l;
                }
            }
        }
        if(!m)
            printf("-1\n");
        else
            printf("%d %d\n",a[p],m);
    }
}
