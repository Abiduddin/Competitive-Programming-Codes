#include <stdio.h>
#include <string.h>
#include <ctype.h>

int rev(char a[],int i,int j)
{
    int m=1;
    if(j<0)
        return m;
    while(!(isalnum(a[i])&&isalpha(a[i])))
    {
        i++;
    }

    while(!(isalnum(a[j])&&isalpha(a[j])))
    {
        j--;
    }
    if(a[i]!=a[j])
        m=0;

    if(!m)
        return 0;
    return rev(a,i+1,j-1);
}

int main()
{
    int i,j,k;
    char a[1000];
    while(gets(a))
    {
    j=strlen(a);
    k=rev(a,0,j-1);
    if(k)
        printf("palindromic\n");
    else
        printf("not palindromic\n");
    }
}
