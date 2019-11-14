#include <stdio.h>
#include <math.h>

int main()
{
    long int i,j,k,l;

    scanf("%d",&i);
    while(i--){
        scanf("%d",&j);
        if(j>0&&j<10000001){
            k=sqrt(j);
            if((k*k)==j)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
