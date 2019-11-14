#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i,j,k,l,t,c=0;
    int a[60];
    scanf("%d",&t);

    while(t--)
    {
        k=0,l=0;
        scanf("%d",&i);
        for(j=0;j<i;j++)
        {
            scanf("%d",&a[j]);
            if(j>=1)
            {
                if(a[j-1]>a[j])
                    k++;
                else if(a[j-1]<a[j])
                    l++;

            }
        }

        printf("Case %d: %d %d\n",++c,l,k);
    }
    return 0;
}
