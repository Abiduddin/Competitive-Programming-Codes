#include <stdio.h>
#include <string.h>

int main()
{
    char bb[1000],aa[100][1000];

    long int i,j,k,l,g,h,m,n=1;;
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
                    aa[k][l]='\0';
                    k++;
                    l=0;
                }
                else if(bb[j+1]=='\0')
                {
                    aa[k][l]='\0';
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

        for(j=0;j<k-1;j++){
                g=0;
            for(m=j+1;m<k;m++){
            if((!(strcmp(aa[j],aa[m])))&&(aa[j]!="Xx!2")){
                strcpy(aa[m],"Xx!2");
                g++;
            }

        }
        g++;
        if(g){
            while(g>0)
            {
                n*=g;
                g--;
            }
        }
        }
        h=h/n;
        printf("1/%d\n",h);
        for(g=0;g<k;g++)
            puts(aa[g]);
    }
    return 0;

}
