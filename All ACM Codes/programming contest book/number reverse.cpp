#include <stdio.h>

int main()
{
    int i,j=0,k,l;

    scanf("%d",&l);

    while(l!=0)
    {
        k=l%10;
        j=j*10+k;
        l=l/10;
    }

    printf("%d\n",j);
}
