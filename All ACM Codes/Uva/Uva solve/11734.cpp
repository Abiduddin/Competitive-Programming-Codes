//#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//using namespace std;

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    int i,j,k,l,c=0,m,n,p,r;
    char a[100],b[100];

    scanf("%d",&k);
    getchar();
    while(k--)
    {
        gets(a);
        gets(b);

        if(strcmp(b,a)==0)
        {
            printf("Case %d: Yes\n",++c);
        }
        else
        {
            p=0;
           char cc[100];
            m=strlen(a);
            for(i=0;i<m;i++)
            {
                if(a[i]==' ')
                    continue;
                  cc[p]=a[i];
                  p++;

            }
            cc[p]='\0';

            if(!strcmp(cc,b))
                printf("Case %d: Output Format Error\n",++c);
            else
                printf("Case %d: Wrong Answer\n",++c);

        }

    }
    return 0;
}
