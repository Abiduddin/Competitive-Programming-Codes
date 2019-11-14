
#include <stdio.h>
#include <string.h>
//#include <ctype.h>




int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int j,k,l,aa[11],t,c=0;
    char a[11][110];

    scanf("%d",&t);

    while(t--)
    {
        for(i=0;i<10;i++)
        {
            scanf("%s %d",&a[i],&aa[i]);
        }
        k=0;
        for(i=0;i<10;i++)
        {
            if(k<aa[i])
            {
                k=aa[i];
            }
        }
        printf("Case #%d:\n",++c);
        for(i=0;i<10;i++)
        {
            if(k==aa[i])
            {
                printf("%s\n",a[i]);
            }
        }
    }

   return 0;
}
