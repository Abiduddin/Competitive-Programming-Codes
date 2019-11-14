                ///458
//#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("458.txt","r",stdin);
    //freopen("458a.txt","w",stdout);
    char a[1000];

    int i,j;

    while(gets(a)!=NULL)
    {
        i=strlen(a);
        for(j=0;j<i;j++)
            a[j]=a[j]-7;
        puts(a);
    }
    return 0;
}



