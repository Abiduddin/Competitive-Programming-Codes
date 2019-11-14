#include <stdio.h>

int main()
{
    int i,j,k;

    while(scanf("%d%d",&i,&j)!=EOF)
    {
        if(i>=-100&&i<=100&&j>=0&&j<=200)
        printf("%d\n",i*j*2);
    }
    return 0;
}
