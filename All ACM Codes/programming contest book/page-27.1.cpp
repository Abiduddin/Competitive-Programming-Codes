#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l,m;
    char a[100];

    scanf("%d",&k);

    sprintf(a,"%d",k);

    l=strlen(a);
    m=1;
    if(l==1)
        printf("%d is palindrome\n",k);
    else
    {
        for(i=0,j=l-1;i<l/2;i++,j--)
        {
            if(a[i]!=a[j])
                m=0;
        }
        if(m)
            printf("%d is palindrome\n",k);
        else
            printf("%d is not palindrome\n",k);
    }
    return 0;
}
