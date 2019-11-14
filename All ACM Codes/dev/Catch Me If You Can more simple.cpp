
#include <stdio.h>

int main()
{
    register int t,m;
    int k,l,n,o;

    scanf("%d",&o);
    for(t=1;t<=o;t++)
    {
        scanf("%d%d%d%d",&k,&l,&m,&n);
        if(n==0)
           printf("Case %d: Abir will survive\n",t);
        else if(m==0)
        printf("Case %d: Abir will be arrested\n",t);

        else
        {
              m=m+l*n-k*n;

        if(m<0){
            printf("Case %d: Abir will be arrested\n",t);
        }
        else
            printf("Case %d: Abir will survive\n",t);

        }


    }
    return 0;


}
