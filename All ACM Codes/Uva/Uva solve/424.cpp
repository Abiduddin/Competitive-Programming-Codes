#include <stdio.h>
#include <string.h>

int a[110][110];

int main()
{
//    freopen("aa.txt","r",stdin);
//    freopen("aa1.txt","w",stdout);
    register int i,j;
    int k=0,l,s,c,sum[110],p;
    char b[110];
    int m=0;

    while(gets(b))
    {

        l=strlen(b);
        if(l==1&&b[0]=='0')
        {

            c=0;
            p=0;
            for(i=0;i<k;i++)
            {
                s=0;
                for(j=0;j<m;j++)
                {
                    s=s+a[j][i];
                }
                s=s+c;
                if(s>=10&&i!=(k-1))
                {
                    sum[p]=s%10;
                    c=s/10;
                    p++;
                }
                else if(s>=10&&i==(k-1))
                {
                    sum[p]=s;
                    p++;
                }
                else
                {
                    sum[p]=s;
                    p++;
                    c=0;

                }
            }

                    //printf("%d",s);
                    for(j=p-1;j>=0;j--)
                    {
                        printf("%d",sum[j]);
                    }
                    printf("\n");


            }

        for(i=l-1,j=0;i>=0;i--,j++)
        {
            a[m][j]=(b[i]-'0');
        }
        m++;
        if(l>k)
            k=l;
    }

}
