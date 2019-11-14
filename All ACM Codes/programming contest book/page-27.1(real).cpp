#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l,m,pl[110],n=0,p;
    char a[110];

    for(k=0;k<2000;k++)
    {


    sprintf(a,"%d",k);

    l=strlen(a);
    m=1;
    if(n>100)
        break;
    else if(l==1)
        {
            pl[n]=k;
            n++;
        }
    else
    {
        for(i=0,j=l-1;i<l/2;i++,j--)
        {
            if(a[i]!=a[j])
                m=0;
        }
        if(m)
        {
            pl[n]=k;
            n++;
        }
    }
    }
    scanf("%d",&p);
    printf("%d\n",pl[p]);
    return 0;
}
