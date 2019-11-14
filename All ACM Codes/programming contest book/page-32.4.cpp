#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,l;


    scanf("%d",&l);
    j=1;
    if(l<2)
        printf("%d is not prime\n",l);
    else if(l==2)
        printf("2 is prime\n");
    else if(l%2==0)
        printf("%d is not prime\n",l);
    else
    {
        for(i=3;i<=sqrt(l);i++)
        {
            if(l%i==0)
            {
                printf("%d is not prime",l);
                j=0;
                break;
            }
        }
        if(j)
            printf("%d is prime",l);
    }
}
