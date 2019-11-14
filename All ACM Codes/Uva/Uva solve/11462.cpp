#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int a[2000990];
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int l;

    while(scanf("%d",&l)&&l)
    {
        for(i=0;i<l;i++)
            scanf("%d",&a[i]);
        sort(a,a+l);
        l--;
        for(i=0;i<l;i++)
            printf("%d ",a[i]);
            printf("%d\n",a[i]);
    }
}
