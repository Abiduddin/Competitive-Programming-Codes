#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,t,num[110],p;
    char aa[15];

    scanf("%d",&t);
    getchar();

    while(t--)
    {
        scanf("%d",&k);
        j=0;
        getchar();
        for(i=1;i<=k;i++)
        {
            //getchar();
            gets(aa);


            if(!strcmp(aa,"LEFT"))
            {
                //printf("L\n");
                num[i]=-1;
                j=j+num[i];
                //printf("j=%d a[%d]=%d\n",j,i,num[i]);

            }
            else if(!strcmp(aa,"RIGHT"))
            {
                //printf("R\n");
                num[i]=1;
                j=j+num[i];
                //printf("j=%d a[%d]=%d\n",j,i,num[i]);
            }
            else
            {
                //printf("S\n");
                //l=strlen(aa);
                p=atoi(aa+8);
                num[i]=num[p];
                j=j+num[i];
                //printf("j=%d a[%d]=%d\n",j,i,num[i]);
            }
        }
        printf("%d\n",j);

    }
}
