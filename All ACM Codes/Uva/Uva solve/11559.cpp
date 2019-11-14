#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,n,b,h,w,p,l,k,m,r;

    while(scanf("%d %d %d %d",&n,&b,&h,&w)!=EOF)
    {
        m=99999999;
        while(h--)
        {
        scanf("%d",&p);
        r=p*n;
        if(r<=b)
        {
            l=w;
            while(l--)
            {
                scanf("%d",&k);
            if(r<m&&k>=n)
            {
                m=r;
            }

            }

        }
        else
        {
            l=w;
            while(l--)
            {
                scanf("%d",&k);
            }
        }

        }
        printf(m == 99999999 ? "stay home\n" : "%d\n",m );
    }
}
