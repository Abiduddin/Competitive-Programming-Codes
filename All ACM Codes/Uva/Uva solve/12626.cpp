#include <stdio.h>
#include <string.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int j,k,l,m,n,t,r,g,a;
    char aa[1000];

    scanf("%d",&k);
    getchar();

    while(k--)
    {
        a=0,m=0,j=0,r=0,g=0,t=0;
        gets(aa);
        l=strlen(aa);
        for(i=0;i<l;i++)
        {
            if(aa[i]=='A')
                a++;
            else if(aa[i]=='I')
                j++;
            else if(aa[i]=='M')
                m++;
            else if(aa[i]=='R')
                r++;
            else if(aa[i]=='G')
                g++;
            else if(aa[i]=='T')
                t++;
        }

        //printf("%d %d %d %d %d %d\n",m,a,r,g,j,t);

        i=0;
        while(1)
        {
        if((a>=3)&&(j>=1)&&(m>=1)&&(r>=2)&&(g>=1)&&(t>=1))
        {
            a=a-3;
            j--;
            m--;
            r=r-2;
            g--;
            t--;
            i++;
        }
        else
            break;

        }
        printf("%d\n",i);
    }
    return 0;
}
