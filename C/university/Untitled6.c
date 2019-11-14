#include <stdio.h>
int main()
{
    int i,j,k,l,n;
    j=0;
    i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        k=n%10;
        j=j+pow(2,i)*k;
        n/=10;
        i++;
    }
    printf("\n%d",j);

}
