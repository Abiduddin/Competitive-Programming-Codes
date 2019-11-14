#include <stdio.h>
//#include <string.h>
//#include <ctype.h>




int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    //register int i;
    int i,j,k,l,t,c;

    while(scanf("%d%d",&t,&l)!=EOF)
    {
        j=0;
        while(t--)
        {
            k=1;
            i=l;
            while(i--)
            {
                scanf("%d",&c);
                if(c==0)
                    k=0;
            }
            if(k)
                j++;
        }

        printf("%d\n",j);
    }


   return 0;
}
