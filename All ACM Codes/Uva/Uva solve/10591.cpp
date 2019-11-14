            ///10591


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,m,n,c=0,p,g;
    char a[100];

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&m);
        j=m;
        g=0;
        while(1)
        {
            if(j==1)
            {
                printf("Case #%d: %d is a Happy number.\n",++c,m);
                //printf("%d",g);
                break;
            }
            sprintf(a,"%d",j);
            l=strlen(a);
            k=0;
            for(i=0;i<l;i++)
                {
                    p=(a[i]-48);
                    k=k+p*p;
                }

            j=k;
            //printf("m=%d j=%d k=%d\n",m,j,k);
            if(j==m||g>20)
            {
                printf("Case #%d: %d is an Unhappy number.\n",++c,m);
                break;
            }
            g++;
        }
    }
}
