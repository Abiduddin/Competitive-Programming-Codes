#include <stdio.h>
#include <string.h>

int long pl[100000100];

int main()
{
    register int i,j,k,l,m,n=0,p;
    char a[210];

    for(k=0;k<200000000;k++)
    {


    sprintf(a,"%d",k);

    l=strlen(a);
    m=1;
    if(n>10000000)
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
    printf("Enter: ");
    scanf("%d",&p);
    printf("%d\n",pl[p]);
    return 0;
}
