#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int j,k,t,l,c=0;
    long int m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d/%d/%d",&j,&k,&l);
        m=l*365+k*30+j;
        scanf("%d/%d/%d",&j,&k,&l);
        n=l*365+k*30+j;
        if(m<n)
            printf("Case #%d: Invalid birth date\n",++c);
        else
        {
            n=((m-n)/365);
            if(n>130)
                printf("Case #%d: Check birth date\n",++c);
            else
            printf("Case #%d: %ld\n",++c,n);
        }
    }
    return 0;
}

