#include <stdio.h>
//#include <string.h>
//#include <ctype.h>




int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
    int j,a[6],b[6];

    while(scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF)
    {
        scanf("%d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4]);

        j=1;
        for(i=0;i<5;i++)
        {
            if(a[i]==b[i])
            {
                j=0;
                break;
            }

        }
        if(j)
            printf("Y\n");
        else
            printf("N\n");
    }

   return 0;
}
