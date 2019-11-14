#include <stdio.h>


int main()
{
    int register k;
    int i,j,l,a[65540],n,p;
    a[0]=0;
    for(i=1,j=0,k=1;k<65537;k++ )
    {
        i=i+j;
        j++;
        a[k]=i;
    }

    //printf("%d\n",a[62000]);

    scanf("%d",&l);

    while(l--)
    {
        j=1;
        scanf("%d",&n);

        if(n<=1226)
            k=1;
        else if(n<=4951)
            k=51;
        else if(n<=31126)
            k=101;
        else if(n<=124751)
            k=251;
        else if(n<=499501)
            k=501;
        else if(n<=6123251)
            k=1001;
        else if(n<=21121751)
            k=3501;
        else if(n<=84493501)
            k=6501;
        else if(n<=199990001)
            k=13001;
        else if(n<=364486501)
            k=20001;
        else if(n<=449985001)
            k=27001;
        else if(n<=799980001)
            k=30001;
        else if(n<=1249975001)
            k=40001;
        else if(n<=1512472501)
            k=50001;
        else if(n<=1799970001)
            k=55001;
        else if(n<=1921969001)
            k=60001;
        else
            k=62001;



        for(;a[k]<=n&&k<65537;k++)
        {
            if(a[k]==n)
            {
                j=0;
                printf("1 ");
            }
        }
        if(j)
            printf("0 ");

    }

    return 0;
}
