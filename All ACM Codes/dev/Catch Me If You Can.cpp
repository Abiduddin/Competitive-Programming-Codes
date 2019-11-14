
#include <stdio.h>

int main()
{
    register int t,i;
    int k,l,m,n,o,p,u;

    scanf("%d",&o);
    for(t=1;t<=o;t++)
    {
        scanf("%d%d%d%d",&k,&l,&m,&n);
        if(m==0&&n!=0)
        printf("Case %d: Abir will be arrested\n",t);

        else
        {
        m=m+l-k;
        while(1)
        {

        if(n==0){
            printf("Case %d: Abir will survive\n",t);
            break;
            }
        else if(m<0){
            printf("Case %d: Abir will be arrested\n",t);
            break;
        }


            m=m+l-k;
            n--;
        }
        }


    }
    return 0;


}
