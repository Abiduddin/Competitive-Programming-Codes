#include <stdio.h>
#include <string.h>
int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    char a[30];
    int l,c=0;
    while(1)
    {
        gets(a);
        l=strlen(a);
        if(l==1&&a[0]=='#')
            break;
        else if(!(strcmp(a,"HELLO")))
            printf("Case %d: ENGLISH\n",++c);
        else if(!(strcmp(a,"HOLA")))
            printf("Case %d: SPANISH\n",++c);
            else if(!(strcmp(a,"HALLO")))
            printf("Case %d: GERMAN\n",++c);
            else if(!(strcmp(a,"BONJOUR")))
            printf("Case %d: FRENCH\n",++c);
            else if(!(strcmp(a,"CIAO")))
            printf("Case %d: ITALIAN\n",++c);
            else if(!(strcmp(a,"ZDRAVSTVUJTE")))
            printf("Case %d: RUSSIAN\n",++c);
            else
            printf("Case %d: UNKNOWN\n",++c);
    }
    return 0;
}
