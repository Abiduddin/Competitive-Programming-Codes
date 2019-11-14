#include <stdio.h>

int main()
{
    long int i,j,k,l;

    scanf("%d",&i);
    while(i--)
    {
        scanf("%d",&j);
        if(j>=0&&j<=2147483647){
            if((j%2)==0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
}
