#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int t,c=0;
    long long int i,j,k;

    while(scanf("%d",&t)!=EOF)
    {
    while(t--)
    {
        scanf("%lld%lld%lld",&i,&j,&k);

        if((i>=(j+k))||(j>=(k+i))||(k>=(i+j)))
            printf("Case %d: Invalid\n",++c);
        //else if(i<=0||j<=0||k<=0)
           // printf("Case %d: Invalid\n",++c);
        else
        {

        if(i==j&&j==k)
            printf("Case %d: Equilateral\n",++c);
        else if(i==j||k==i||j==k)
            printf("Case %d: Isosceles\n",++c);
        else
            printf("Case %d: Scalene\n",++c);

        }
    }
    c=0;
    }
    return 0;
}

