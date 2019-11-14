#include <stdio.h>
#include <math.h>

int bigmod(int b,int p,int m)
{
    if(p==0) return 1%m;

    int x=bigmod(b,p/2,m);

    x=(x*x)%m;

    if(p%2==1)
    {
        if(b>=m)
            x=((x%m)*(b%m))%m;
        else
        x=(x*b)%m;

    }

    return x;
}



int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    double s,d,i,j;
    int r,b,p,m;

    while(scanf("%d%d%d",&b,&p,&m)!=EOF)
    {
        r=bigmod(b,p,m);
        //if(p%2==1) r=(r*b)%m;
        printf("%d\n",r);
    }
}
