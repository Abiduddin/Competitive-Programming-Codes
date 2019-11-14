#include <stdio.h>

int main()
{
    int i,j,k;
    while((scanf("%d%d",&i,&j)==2)&&i>=-100&&i<=100&&j>=0&&j>=200)
    {
        k=i*j;
        printf("%d\n",k);

    }
}
