#include <bits/stdc++.h>
using namespace std;
int big_mod(int b, int p,int m);
int main()
{
    int t,n,k,m;
    int i,j,sum,x,y;
    scanf("%lld", &t);
    //while(t--)
    //{

    for(j=1;j<=t;j++)
    {
        sum=0;

        scanf("%d%d%d",&n,&k,&m);
        for(i=n-1;i>1;i--){
                x=pow(2,i);
        y=pow(2,i-1);
            sum+=__gcd(x,y);
        }
        x=pow(2,n-3);
        sum+=x;
        x=pow(2,n);
        int b=x-sum;
       printf("Case %d: %d\n",j,big_mod(k,b,m));
    }

    return 0;
}
int big_mod(int b, int p,int m)
{
    if(p==0)
        return 1%m;
   int x;
   x=big_mod(b,p/2,m);
    x=(x*x)%m;
    if(p%2==1)
        x=(x*b)%m;

    return x;
}
