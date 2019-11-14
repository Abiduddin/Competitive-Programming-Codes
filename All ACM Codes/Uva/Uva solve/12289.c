#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
   // freopen("aa.txt","r",stdin);
   // freopen("aa1.txt","w",stdout);
    int i,j;
    char aa[10];
    scanf("%d",&i);
    getchar();
    if(i>=0&&i<=10)
    {
    while(i--)
    {
        scanf("%s",aa);
        if(strlen(aa)==5)
            printf("3\n");
        else
        {
            j=0;
            if(aa[0]=='o') j++;
            if(aa[1]=='n') j++;
            if(aa[2]=='e') j++;
        if(j>=2) printf("1\n");
        else
            printf("2\n");
    }
    }
    }
    return 0;

}
