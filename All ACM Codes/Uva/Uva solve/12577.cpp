//#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int c=0;
    register char a[10];

    while(1)
    {
        gets(a);
        if(!strcmp(a,"*"))
            break;
        else if(!strcmp(a,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",++c);
        else
            printf("Case %d: Hajj-e-Asghar\n",++c);

    }


    return 0;
}
