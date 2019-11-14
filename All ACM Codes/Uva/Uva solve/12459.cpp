#include <stdio.h>
#include <math.h>

long long a[100];

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int j;


    a[0]=1;
    a[1]=1;
    //ceill()

    for(i=2;i<=80;i++)
        a[i]=(a[i-1]+a[i-2]);

    while(scanf("%d",&j))
    {
        if(j==0)
            break;
        printf("%lld\n",a[j]);
    }
    return 0;

}
