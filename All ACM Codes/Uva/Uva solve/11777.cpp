#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,m,n,c=0,t,a[4];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d%d%d%d%d%d",&i,&j,&k,&l,&a[0],&a[1],&a[2]);
        for(m=0;m<2;m++)
            if(a[m]<a[m+1])
        {
            n=a[m];
            a[m]=a[m+1];
            a[m+1]=n;
        }
        n=(a[0]+a[1])/2;
        i=i+j+k+l+n;
        if(i>=90)
            printf("Case %d: A\n",++c);
        else if(i>=80)
            printf("Case %d: B\n",++c);
        else if(i>=70)
            printf("Case %d: C\n",++c);
        else if(i>=60)
            printf("Case %d: D\n",++c);
        else
            printf("Case %d: F\n",++c);
    }
    return 0;
}
