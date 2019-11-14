#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j;

    while(scanf("%d",&i)!=EOF)
    {
        j=i;
        while(1)
        {
            if(j<2)
                break;
            else
            {
                j-=3;
                j+=1;
                i+=1;
            }
        }
        printf("%d\n",i);
    }

    return 0;


}
