#include <stdio.h>
int main()
{
    int i=1,j,l,a;
    char s[1001];
    scanf("%d",&j);
    getchar();
    while(i<=j){
        a=1;
        gets(s);
        for(l=0;s[l];l++)
            if(s[l]!=' '&&s[l+1]==' ')
            a++;
        printf("%d\n",a*420);
        i++;
    }
    return 0;
}