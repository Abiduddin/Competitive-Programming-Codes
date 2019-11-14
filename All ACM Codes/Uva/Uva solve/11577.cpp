#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i,k;
    int j,l,m,n,a[30];
    char aa[1000],ch;

    scanf("%d",&k);
    getchar();

    while(k--)
    {

    gets(aa);
    l=strlen(aa);
    m=0,n=0;
    while(m!=26)
    {
    ch='a';
    ch=ch+m;
    j=0;
    for(i=0;i<l;i++)
    {
        if(ch==tolower(aa[i]))
            j++;
    }
    a[m]=j;
    if(j>n)
        n=j;
    m++;

    }
    for(i=0;i<26;i++)
        if(a[i]==n)
        printf("%c",i+97);
    printf("\n");




    }
    return 0;
}
