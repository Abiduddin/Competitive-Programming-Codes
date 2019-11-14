#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,i,j,p=0;
    int kk[15];
    while(scanf("%d",&i)&&i)
    {
        if(p)
            printf("\n");
        p++;

        for(j=0;j<i;j++)
            scanf("%d",&kk[j]);

        for(a=0;a<i-5;a++)
            for(b=a+1;b<i-4;b++)
                for(c=b+1;c<i-3;c++)
                    for(d=c+1;d<i-2;d++)
                        for(e=d+1;e<i-1;e++)
                            for(f=e+1;f<i;f++) {
                            //if(b!=a&&c!=a&&c!=b&&d!=a&&d!=b&&d!=c&&e!=a&&e!=b&&e!=c&&e!=d&&f!=a&&f!=b&&f!=c&&f!=d&&f!=e){
                            printf("%d %d %d %d %d %d\n",kk[a],kk[b],kk[c],kk[d],kk[e],kk[f]);


    //}
}

               // printf("\n");
}
return 0;
}
