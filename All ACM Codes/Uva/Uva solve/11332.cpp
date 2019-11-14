#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int strr(int a)
{
    int i,l,k,m;
    char aa[30];
    sprintf(aa,"%d",a);
    l=strlen(aa);
    if(l==1) return (aa[0]-48);
    k=0;
    for(i=0;i<l;i++)
    k+=(aa[i]-48);
    m=strr(k);

    return m;
}
int  main()
{
    int i,j,k,l,m;
    char a[100],ch;

    while(scanf("%s",a))
    {
        k=0;
        l=strlen(a);
        if(l==1&&a[0]=='0')
            break;

        for(i=0;i<l;i++)
            k+=(a[i]-48);

            m=strr(k);
            printf("%d\n",m);
    }
    return 0;
}
