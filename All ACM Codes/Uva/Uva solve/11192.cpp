#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    //freopen("aa.txt","r",stdin);
//    freopen("aa1.txt","w",stdout);
    char a[200],b[200];
    int  i,j,k,l,m,n;

    while(1)
    {
        scanf("%d",&k);
        getchar();


        if(k==0)
            break;
        gets(a);
//        scanf("%s",a);
//        getchar();

        l=strlen(a);
        m=l/k;
        for(i=0,j=1,n=0;i<l;i++,j++,n++)
        {
            b[n]=a[i];

            if(j==m)
            {
                for(;n>=0;n--)
                    printf("%c",b[n]);
                j=0;
                n=-1;
            }


        }
        printf("\n");
    }
    return 0;
}
