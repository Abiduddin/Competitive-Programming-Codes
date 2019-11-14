#include <stdio.h>

int main()
{

//    freopen("aa.txt","r",stdin);
//    freopen("aa1.txt","w",stdout);
    int i,j,k,l,t,m,n,c,r,a[200][200];
    while(scanf("%d",&t))
    {
        k=0,m=0;
        if(t==0)
            break;

        for(i=0;i<t;i++)
        {
            l=0;
            for(j=0;j<t;j++)
        {
            scanf("%d",&a[i][j]);
            l+=a[i][j];

        }
        if(l%2!=0&&l!=0)
        {
            if(k==0)
                r=i+1;
            k++;
        }

        }
        for(i=0;i<t;i++)
        {
            l=0;
            for(j=0;j<t;j++)
        {
            l+=a[j][i];
        }
        if(l%2!=0&&l!=0)
        {
            if(m==0)
                c=i+1;
            m++;
        }
        }
        if(k==0&&m==0)
            printf("OK\n");
        else if(k==1&&m==1)
            printf("Change bit (%d,%d)\n",r,c);
        else
            printf("Corrupt\n");
    }
}
