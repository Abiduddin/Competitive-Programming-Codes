#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,f,a[100000],p,y,r;

    while(scanf("%d%d",&f,&n)!=EOF)
    {
        //i=0;j=1;
        r=n;
        for(i=0,j=1,k=2;r>0;i=i+3,j=j+3,k=k+3,r--)
        {
            scanf("%d%d%d",&a[i],&a[j],&a[k]);

        }

        scanf("%d",&l);
        while(l--)
        {
            y=0;
            scanf("%d",&p);
        r=n;
        for(i=0,j=1,k=2;r>0;i=i+3,j=j+3,k=k+3,r--)
        {
            if(p>=a[i]&&p<=a[j])
                y=y+a[k];

        }
        printf("%d\n",y);

        }

    }
}
