#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    register int k,l;
    int a[10000],b,i,j,m,n,c=0;

    while(1)
    {

        scanf("%d%d",&i,&j);
        if(i==0&&j==0)
            break;

        else
        {

        n=80;

        for(k=0;k<i;k++)
            scanf("%d",&a[k]);
        for(l=0;l<j;l++)
            scanf("%d",&b);

        if(i>j)
        {
            for(k=0;k<i-1;k++)
                for(l=0;l<i-k-1;l++)
                if(a[l]>a[l+1])
            {
                m=a[l];
                a[l]=a[l+1];
                a[l+1]=m;
            }

            m=i-j;
            if(m==1)
                n=a[0];
            else
            {
                for(k=0;k<m;k++)
                    if(a[k]<n)
                {
                    n=a[k];
                }

            }
            printf("Case %d: %d %d\n",++c,m,n);
        }
        else
        printf("Case %d: 0\n",++c);
    }

}
return 0;
}
