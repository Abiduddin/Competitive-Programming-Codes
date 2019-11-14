#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l,t,w,h,m,n,p,c=0,r;
    char a[100];
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        k=0,w=0,h=0,m=0,n=0,p=0;
        gets(a);
        l=strlen(a);
        for(i=0,r=0;i<l;i++,r++)
        {
            j=a[i]-'0';
            if(j==30)
            {
                k++;
                n=0;
                r--;
            }
            else if(j==71)
            {
                k++;
                n=0;
                r--;
            }
            else if(j==39)
            {
                w++;
                n++;
                if(n==3)
                {
                    h++;
                    n=0;
                }
            }
            else
            {
                k+=j;
                n=0;
            }
            if(r==5)
            {
                p=k-p;
                if(p==0)
                    m++;
                p=k;
                r=-1;
            }
        }
        printf("Case %d:\nHat trick: %d\nMaiden over: %d\nTotal runs: %d\n",++c,h,m,k);

    }
    return 0;
}

