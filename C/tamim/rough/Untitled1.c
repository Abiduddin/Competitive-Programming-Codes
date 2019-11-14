#include <stdio.h>

int main()
{
                    ///  0    1    2    3    4
        char aa[][100]={"no","no","good","boy"};
        long int g,h,m,n=1,k,j,f,d=0;
        k=4;
        g=k;
        h=1;
        while(g>0){
            h*=g;
            g--;
            }
            g=0;
        for(j=0;j<k-1;j++){
            for(m=j+1;m<k;m++){
            if(!(strcmp(aa[j],aa[m]))&&strcmp(aa[j],"Xx!2")){
                strcpy(aa[m],"Xx!2");
                g++;
            }
            g++;
            if(g)
                while(g>0)
                {
                    n*=g;
                    g--;
                }
        }

        }
        h=h/n;
        printf("1/%d\n",h);
        return 0;
}
