#include <stdio.h>
#include <string.h>
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,m,n;
    char a[1000],b[1000],c;

    while(gets(a))
    {
        l=strlen(a);
        n=0;
        j=0;
        for(i=0;i<=l;i++)
        {
            if(a[i]==' '||a[i]=='\0')
            {
                k=i-1;
                while(j<=k)
                {
                    b[n++]=a[k--];
                }
                if(a[i]==' ')
                {
                b[n++]=' ';
                i++;
                j=i;
                }
                else{
                    b[n]='\0';
                }
            }
        }
        puts(b);
    }
    return 0;

}
