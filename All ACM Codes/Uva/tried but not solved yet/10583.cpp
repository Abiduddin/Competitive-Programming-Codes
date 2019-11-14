#include <stdio.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    register int i;
    int j,k,l,m,n,a[50099],p,c=0,r=1,g;


    while(scanf("%d%d",&m,&n))
    {
        if(m==0&&n==0)
            break;

        for(i=1;i<=m;i++)
        {
            a[i]=0;
        }

        g=0;
        p=0;

        while(n--)
        {
            scanf("%d%d",&k,&l);

            if((a[k]==0)&&(a[l]==0)&&(l!=k))
            {
                a[k]=r;
                a[l]=r;
                p++;
                r++;
                g=g+2;
            }
            else if((a[k]==0)&&(a[l]!=0))
            {
                a[k]=a[l];
                g++;
            }
            else if((a[k]!=0)&&(a[l]==0))
            {
                a[l]=a[k];
                g++;
            }
            else if(a[k]!=0&&a[l]!=0&&(k!=l))
            {
                if(a[k]!=a[l])
                {
                    for(i=1;i<=m;i++)
                        {
                            if(a[i]==a[l])
                                a[i]=a[k];
                        }
                        p--;
                }
            }

        }

        p=p+(m-g);
        printf("Case %d: %d\n",++c,p);
    }
}

