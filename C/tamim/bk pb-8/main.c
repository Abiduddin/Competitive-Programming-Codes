#include <stdio.h>

int main()
{
    int i,j,k,l,m;
    float aa;
    scanf("%d",&i);

    while(i--){
        scanf("%d",&j);
        l=0;
        m=j;
        while(j--){
            scanf("%d",&k);
            l=l+k;
        }
        aa=(float)l/m;
        printf("%.2f\n",aa);
    }
    return 0;
}
