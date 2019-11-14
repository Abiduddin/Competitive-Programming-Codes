#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,l,j,k,l;
    while(scanf("%d",&i)!=EOF)
    {
        l=0;
        //j=i;
        if(i>=5)
        {
                if(i>=5)
                {
                   l=l+i/5;
                   if(i/5>1)
                    l+=(i/5-1);
                }

                if(i>=10)
                {
                    l=l+i/10;
                    if(i/10>1)
                        l+=(i/10-1);
                }


                if(i>=25)
                {
                    l=l+i/25;
                    if(i/25>1)
                        l+=(i/25-1);
                }
                if(i>=50)
                {
                    l=l+i/50;
                    if(i/50>1)
                        l+=(i/50-1);
                }
          printf("%d\n",l);
        }
        else
            printf("1\n");
    }
    return 0;
}
