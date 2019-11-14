#include <stdio.h>
#include <string.h>


int main()
{
    int i,j,k,l;
    char a[30];

    while(scanf("%d ",&l)!=EOF)
    {
        gets(a);
        k=strlen(a);
        if(l%k==0)
        {
            j=1;
            for(i=l;i>=k;i=i-k)
            j=j*i;

            printf("%d\n",j);
        }
        else
        {
            j=1;
            for(i=l;i>=(l%k);i=i-k)
            {
                j=j*i;
            }
            printf("%d\n",j);
        }
    }
    return 0;
}
