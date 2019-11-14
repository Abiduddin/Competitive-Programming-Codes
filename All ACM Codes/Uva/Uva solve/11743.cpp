#include <stdio.h>
#include <string.h>


int main()
{
//    freopen("aa.txt","r",stdin);
//    freopen("aa1.txt","w",stdout);
    int i,j,k,l,m,p[12]={0,2,5,7,10,12,15,17,0,0};
    char a[25];

    scanf("%d",&k);
    getchar();

    while(k--)
    {
        l=0;
        j=0;
        gets(a);
        for(i=0;i<19;i++)
        {
            if(a[i]==' ')
                continue;
            if(p[j]==i)
            {
                j++;
                m=(a[i]-'0')*2;
                if(m>=10)
                {
                    l=l+m%10;
                    m=m/10;
                    l=l+m%10;

                }
                else
                {
                    l=l+m;
                }
            }
            else
            {
                l=l+(a[i]-'0');
            }
        }

        if(l>=10)
            l=l%10;

        if(l)
            printf("Invalid\n");
        else
            printf("Valid\n");

    }
    return 0;
}
