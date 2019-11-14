#include <stdio.h>
#include <string.h>


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,m,n,o,p;
    char a[]="A3HILJMO2TUVWXY51SEZ8",b[22][3]={"AA","E3","HH","II","JL","LJ","MM","OO","S2","TT","UU","VV","WW","XX","YY","Z5","11","2S","3E","5Z","88"};
    char aa[100],c[]="AHIMOTUVWXY18";

    while(gets(aa))
    {
        l=strlen(aa);
        m=0;
        o=1;

        for(i=0;i<l;i++)
        {
            if(!strchr(a,aa[i]))
            {
                o=0;
                break;
            }

        }

        if(o)
        {
            m=1;
            for(i=0,j=l-1;i<l/2;i++,j--)
            {
                if(strchr(a,aa[i]))
                for(n=0;n<21;n++)
                {
                    if(b[n][0]==aa[i]&&aa[j]!=b[n][1])
                    {
                            m=0;
                            break;

                    }
                }
                if(m==0)
                    break;
            }
        }
        if(l%2!=0)
        {
            if(!strchr(c,aa[l/2]))
                m=0;
        }

        p=1;
        for(i=0,j=l-1;i<l/2;i++,j--)
        {
            if(aa[i]!=aa[j])
                p=0;
        }

        if(m==1&&p==1)
        {
            printf("%s -- is a mirrored palindrome.\n\n",aa);
        }
        else if(m==1&&p==0)
        {
            printf("%s -- is a mirrored string.\n\n",aa);
        }
        else if(m==0&&p==1)
        {
            printf("%s -- is a regular palindrome.\n\n",aa);
        }
        else
            printf("%s -- is not a palindrome.\n\n",aa);
    }

    return 0;
}
