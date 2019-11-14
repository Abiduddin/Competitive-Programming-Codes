#include <bits/stdc++.h>
#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int j,t,i,b,w,p,c=0,v;;
    register char a;

    scanf("%d",&t);

    while(t--)
    {
        b=0,w=0,p=0,v=0;
        scanf("%d",&i);
        getchar();
        for(j=0;j<i;j++)
        {
            a=getchar();
            if(a=='B')
                b++;
            else if(a=='W')
                w++;
            else if(a=='T')
                p++;
                else
                    v++;
        }
        if(b==0&&w==0&&p==0)
            printf("Case %d: ABANDONED\n",++c);
        else if(b==w)
            printf("Case %d: DRAW %d %d\n",++c,b,(i-b-w-v));
        else if(b==0&&p==0)
            printf("Case %d: WHITEWASH\n",++c);
        else if(w==0&&p==0)
            printf("Case %d: BANGLAWASH\n",++c);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d\n",++c,b,w);
        else
            printf("Case %d: WWW %d - %d\n",++c,w,b);

    }


    return 0;
}

