#include <stdio.h>

int main()
{
    int i,j,k,l,t;

    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
        scanf("%d%d",&i,&j);
        if((j<i)||((i+6)<j))
            printf("No\n");
        else
            printf("Yes\n");
        }
    }
}
