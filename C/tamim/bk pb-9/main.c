#include <stdio.h>

int main()
{
    int i,j,k,l,m,n=0;

    scanf("%d",&i);

    while(i--){
        j=10;
        while(j--){
            scanf("%d",&k);
            if(k>1&&k<=100){
                m=1;
                for(l=2;l<=k/2;l++){
                    if((k%l)==0&&(k!=2))
                      m=0;
                }
                if(m)
                    n++;
            }
        }
        printf("%d\n",n);
        n=0;
    }
    return 0;
}
