#include <stdio.h>

int main()
{
    freopen("aa.txt","r",stdin);
    freopen("aa1.txt","w",stdout);
    register int t;
    int i,j;

    scanf("%ld",&t);
    while(t--)
    {
        scanf("%d",&i);
        j=(((((i*567)/9)+7492)*235)/47)-498;
        //printf("%ld\n",j);
        j=j/10;
        j=j%10;

        if(j<0)
            printf("%d\n",-j);
        else
            printf("%d\n",j);
    }
    return 0;
}
