#include <stdio.h>
int main()
{
    int i,j,k,l,m;
    l=0;
    m=1;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        j=l+m;
        printf("%d ",j);
        l=m;
        m=j;
    }

}
