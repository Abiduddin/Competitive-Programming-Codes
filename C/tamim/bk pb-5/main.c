#include <stdio.h>

int main()
{
    int i,j,k,l;
    int aa[5];

    scanf("%d",&k);
    while(k--)
    {
    for(i=0;i<5;i++)
        scanf("%d",&aa[i]);

        for(i=0;i<4;i++)
            for(j=i;j<4;j++)
                if(aa[i]>aa[j+1]){
                    l=aa[i];
                    aa[i]=aa[j+1];
                    aa[j+1]=l;
        }
        printf("%d %d\n",aa[4],aa[0]);
    }
    return 0;

}
