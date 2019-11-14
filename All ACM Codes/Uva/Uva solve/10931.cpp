#include <stdio.h>

int  main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int l,a[100],n=0;

    while(scanf("%d",&i))
    {
    n=0,l=0;
    if(i==0) break;

    while(i!=0)
    {
        if(i%2==0)
            a[n++]=0;
        else
            a[n++]=1;
        i=i/2;
    }
    printf("The parity of ");
    for(i=n-1;i>=0;i--)
    {
    printf("%d",a[i]);
    l+=a[i];
    }
    printf(" is %d (mod 2).\n",l);
    }

}
