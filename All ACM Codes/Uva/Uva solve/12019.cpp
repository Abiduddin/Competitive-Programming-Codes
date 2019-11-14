#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,t,d[14][32];
    char a[10][15]={"dd", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    m=1;
    k=1;
    for(i=1;i<=366; )
    {
        if(((m%2!=0&&m<=7)||(m%2==0&&m>=8))&&m!=2)
            n=31;
        else if(m==2)
            n=28;
        else
            n=30;

        for(j=1;j<=n;j++,i++)
        {
            if(k==8)
                k=1;
            d[m][j]=k;
            k++;
        }
        m++;


    }


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&i,&j);
        //k=;
        printf("%s\n",a[d[i][j]]);
    }

    return 0;
}
