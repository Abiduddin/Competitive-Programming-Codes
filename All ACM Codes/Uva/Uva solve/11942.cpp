#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,t,m,n;

    scanf("%d",&t);
    printf("Lumberjacks:\n");
    while(t--)
    {
        l=1,k=1,j=10,n=-1,m=1000;
        while(j--)
        {
            scanf("%d",&i);
            if(n<=i)
            {
                n=i;

            }
            else
                l=0;
            if(m>=i)
            {
                m=i;
            }
            else
                k=0;

        }
        //if(t==9)

        if(l||k)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
}
