#include <stdio.h>

int a[50050];


int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i,j;
    int k,l,m,n,p,r;

   while(scanf("%d",&l)!=EOF)
   {
       for(i=0;i<l;i++)
        scanf("%d",&a[i]);

       scanf("%d",&k);

       for(i=0;i<k;i++)
       {
        scanf("%d",&m);
        n=1,r=1;
        for(j=0;j<l;j++)
        {
            if(m<a[j])
            {
                if(j==0)
                    printf("X ");
                else if(a[j-1]!=m)
                    printf("%d ",a[j-1]);
                else
                    {
                        p=j-1;
                        while(p--)
                        {
                            if(a[p]!=m)
                            {
                               printf("%d ",a[p]);
                               r=0;
                               break;
                            }
                        }
                        if(r)
                        printf("X ");

                    }

                printf("%d\n",a[j]);
                n=0;
                break;
            }
        }
        if(n)
        {
            if(m!=a[l-1])
            printf("%d X\n",a[l-1]);
            else
            {
                p=l-1;
                while(p--)
                {
                    if(a[p]!=m)
                    {
                        printf("%d X\n",a[p]);
                        break;
                    }
                }
            }
        }


       }


   }
   return 0;
}
