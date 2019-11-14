#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int t,n,a[100],i,c=0,m,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m=0;
        j=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            m+=((a[i]/30)+1);
            j+=((a[i]/60)+1);
        }
        m=m*10;
        j=j*15;
        if(m<j)
            printf("Case %d: Mile %d\n",++c,m);
        else if(m>j)
            printf("Case %d: Juice %d\n",++c,j);
        else
            printf("Case %d: Mile Juice %d\n",++c,m);
    }
    return 0;
}
