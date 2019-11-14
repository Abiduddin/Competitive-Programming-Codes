///11567

#include <stdio.h>


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    long long i,j,k,l;

    while(scanf("%lld",&i)!=EOF)
    {
        j=0;
        while(i!=0)
        {
            j++;
            //printf("i=%d\n",i);
            if(i%2==0)
            {
                i=i/2;
            }
            else
            {
                //if(i%2==0)
                if(((i-1)/2)%2==0||i<8)
                    i=i-1;
                else
                    i=i+1;
            }

            //printf("i=%d\n",i);
        }
        printf("%lld\n",j);
    }
    return 0;
}
