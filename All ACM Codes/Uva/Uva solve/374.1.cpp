# include <stdio.h>
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    long long t,a,i,p,m,r;
    while(scanf("%lld %lld %lld",&a,&p,&m)==3)
    {
        r = 1;
        while(p)
        {
            if(p%2) r = (r*a)%m;
            a = (a*a)%m;
            p/=2;
        }
        printf("%lld\n",r);
    }
    return 0;
}
