#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    int i,j,k,m,h,t;

    scanf("%d",&t);
    while(t--)
    {
        h=0,m=0;
        scanf("%d:%d",&i,&j);

        i=(i*60+j);

        if(i<=660)
        {
            i=720-i;
            while(1)
            {
                if(i>=60)
                {
                    i=i-60;
                    h++;
                }
                else
                {
                    m=i;
                    break;
                }

            }
            printf("%.2d:%.2d\n",h,m);
        }
        else if(i<=720)
        {
            printf("12:%.2d\n",720-i);
        }
        else
            printf("11:%.2d\n",780-i);
    }
    return 0;

}
