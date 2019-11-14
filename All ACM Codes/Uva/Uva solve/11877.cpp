#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    int j,l;

    while(1)
    {
        scanf("%d",&j);
        if(j==0)
            break;
        else
        {
            //j=i;
            l=0;
            while(1)
            {
                if(j>=3)
                {
                    j-=3;
                    j++;
                    l++;
                }
                else if(j==2)
                {
                    l++;
                    break;
                }
                else
                    break;

            }

        }
        printf("%d\n",l);
    }
    return 0;
}
