#include <stdio.h>

int main()
{
    int i,k,j=0;
    scanf("%d",&i);
    if(i>0&&i<=1000){
    int aa[i],p;
    while(j<i){
        scanf("%d",&aa[j]);
        j++;
    }
   for(p=0;p<i-1;p++)
    for(j=0;j<i-1-p;j++)
        if(aa[j]>aa[j+1]){
            k=aa[j+1];
            aa[j+1]=aa[j];
            aa[j]=k;
    }
    j=0;
    while(j<i){
        printf("%d ",aa[j]);
        j++;
    }

    }

}
