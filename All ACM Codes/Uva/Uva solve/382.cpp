#include <stdio.h>
#include <math.h>


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,p=1;


    while(scanf("%d",&k)!=EOF)
    {
        if(p)
        {
            printf("PERFECTION OUTPUT\n");
            p=0;
        }
        if(k==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        l=1;
        j=sqrt(k);
        for(i=2;i<=j;i++)
        {
            if(k%i==0&&k!=i*i)
            {
                l=l+i+k/i;
                //printf("k=%d j=%d l=%d i=%d\n",k,j,l,i);
            }
        }
        if(k%j==0&&k==j*j)
        {
            l=l+j;
            //printf("k=%d j=%d l=%d i=%d\n",k,j,l,i);
        }
        if(k==1)
            l=0;

        if(l==k)
            printf("%5d  PERFECT\n",k);
        else if(l>k)
            printf("%5d  ABUNDANT\n",k);
        else
            printf("%5d  DEFICIENT\n",k);



    }

    return 0;
}
