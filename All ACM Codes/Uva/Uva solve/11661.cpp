#include <stdio.h>
#include <string.h>

char a[2000200];
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int j,k,l,t;
    char ch;
    while(scanf("%d",&t)&&t)
    {

        getchar();
        gets(a);
        ch='o';
        j=99999999;
        for(i=t-1;i>=0;i--)
        {
            if(a[i]=='.')
                continue;
            else if(a[i]=='R'||a[i]=='D')
            {
                if(ch==a[i])
                {
                    k=i;
                }
                else if(ch=='o')
                {
                    ch=a[i];
                    k=i;
                    //printf("i=%d k=%d\n",i,k);

                }
                else
                {
                    ch=a[i];

                    if((k-i)<j)
                    {
                        j=k-i;
                    }
                    k=i;
                   // printf("i=%d k=%d\n",i,k);
                }
            }
            else if(a[i]=='Z')
            {
                j=0;
                break;
            }
        }

        printf("%d\n",j);
    }

    return 0;
}
