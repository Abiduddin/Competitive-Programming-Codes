#include <stdio.h>

int main()
{
    int i,j,k,l;

    scanf("%d",&i);
    getchar();

    while(i--)
    {
        scanf("%d",&j);
        if(j>=1&&j<=100){
        for(k=0;k<j;k++){
            for(l=0;l<j;l++){
                printf("*");
            }
            printf("\n");
    }
    }
    }
    return 0;
}
