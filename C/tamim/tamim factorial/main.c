
#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,l,m,n,p,g,h,aa[80];
    p=0;m=0;
    for(i=2;i<=99;i++){
        for(j=2;j<=(i/2);j++){
            if(i%j==0){
                p=1;}
        }
        if(p==0){
           aa[m]=i;
           m++;
       }
        p=0;
    }

    scanf("%d",&k);
    for(i=0;i<m;i++){
        g=0;
        for(j=2;j<=k;j++){
            n=j;
            while((n%aa[i])==0){
                n=n/aa[i];
                g++;
            }
        }
        if(g)
        printf("(%d,%d) ",aa[i],g);
    }
 return 0;
}
