#include <stdio.h>

int f91(int i)
{
    int n;
    if(i<=100)
         n=f91(f91(i+11));
    if(i>=101)
        n=i-10;
    return n;
}

int main()
{
    int i,j,k,l;

    while(scanf("%d",&i))
    {
        if(i==0)
            break;
        printf("f91(%d) = %d\n",i,f91(i));

    }
}
