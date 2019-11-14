#include <stdio.h>

int main()
{
    int t,l,w,h,k;
    scanf("%d",&t);
    if(t>=0&&t<=100)
    {
        for(k=1;k<=t;k++)
        {
            scanf("%d%d%d",&l,&w,&h);
            if(l>=0&&l<=50&&w>=0&&w<=50&&h>=0&&h<=50)
            {
            if(l>=0&&l<=20&&w>=0&&w<=20&&h>=0&&h<=20)
            {
                printf("Case %d: good\n",k);
            }
            else
            {
                printf("Case %d: bad\n",k);
            }
            }
        }
    }
    return 0;
}
