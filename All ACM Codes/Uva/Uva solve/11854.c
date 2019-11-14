#include <stdio.h>
#include <math.h>
int main()
{
    //freopen("aa.txt","r",stdin);
   // freopen("aa1.txt","w",stdout);
    long int i,j,k;

    while(1)
    {
        scanf("%ld%ld%ld",&i,&j,&k);

        if(i==0&&j==0&&k==0)
            break;
        else
        {
            i*=i;
            j*=j;
            k*=k;
            if((i==(j+k))||(j==(i+k))||(k==(i+j)))
                printf("right\n");
            else
                printf("wrong\n");
        }
    }
    return 0;

}
