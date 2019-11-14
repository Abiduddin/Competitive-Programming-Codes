#include <stdio.h>
#include <string.h>

int main()
{
    char bb[1000],aa[100][1000];

    long int i,j,k,l,g,h,m;;
    scanf("%d",&i);
    getchar();
    while(i--)
    {
        gets(bb);
        k=0;
        l=0;
        for(j=0;j<strlen(bb);j++)
        {
            if(bb[j]!=' ')
            {
                aa[k][l]=bb[j];
                l++;
                if(bb[j+1]==' ')
                {
                    k++;
                    l=0;
                }
            }
        }
        k++;
        g=k;
        h=1;
        while(g>0){
            h*=g;
            g--;
            }
            g=0;
        for(j=0;j<k;j++){
            for(m=j;m<k;m++){
            if(!(strcmp(aa[j],aa[m]))){
                g++;
            }
        }
        }
        g--;
        if(g)
            h=h/(g*2);

        printf("1/%d\n",h);

    }
    return 0;

}
