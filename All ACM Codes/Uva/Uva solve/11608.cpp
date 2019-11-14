#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i,j,c=0;
    int k,a[30],t;

    while(1)
    {
        scanf("%d",&t);
        if(t<0)
            break;
        else
        {
            a[0]=t;
            for(i=1;i<=12;i++)
            {
                scanf("%d",&a[i]);

            }
            for(i=13;i<25;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("Case %d:\n",++c);
            for(i=0,j=13;i<12;i++,j++)
            {
                k=a[i]-a[j];
                if(k>=0)
                {
                    printf("No problem! :D\n");
                    a[i+1]+=k;
                }
                else
                {
                    printf("No problem. :(\n");
                    a[i+1]+=a[i];
                }
            }
        }
    }
    return 0;


}

