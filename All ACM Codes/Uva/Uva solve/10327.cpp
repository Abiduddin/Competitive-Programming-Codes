#include <stdio.h>


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i,j;
    int k,l,n[1020];

    while(scanf("%d",&l)!=EOF)
    {
        for(i=0;i<l;i++)
            scanf("%d",&n[i]);

        k=0;
        for(i=1;i<l;i++)
        {
            for(j=0;j<i;j++)
            {
                if(n[i]<n[j])
                    k++;
            }
        }
        printf("Minimum exchange operations : %d\n",k);
    }
}

