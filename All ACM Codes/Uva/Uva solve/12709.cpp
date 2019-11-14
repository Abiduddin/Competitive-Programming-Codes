#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int k=0,l=0,m,n,t,p;

    while(scanf("%d",&t)!=EOF&&t)
    {
        k=0,l=0;
        while(t--)
        {
        scanf("%d %d %d",&m,&n,&p);
        if(l<p)
        {

            l=p;
            k=m*n*p;

        }
        if(l==p&&k<=(m*n*p))
        {
            k=m*n*p;
        }
        }

        printf("%d\n",k);

    }

}
