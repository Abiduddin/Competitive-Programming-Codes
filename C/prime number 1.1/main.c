#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,k,l,m,n,p,aa[7000];
    p=0;m=0;
    for(i=2;i<=999;i++){
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

    for(i=0;i<m;i++)
        printf("%d\n",aa[i]);

    //scanf("%d",&m);

 return 0;
}
