#include <bits/stdc++.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    char a[1500];
    long int i,j,k,l;

    while(1)
    {
        scanf("%s",a);

        if(!strcmp(a,"0"))
            break;
        else
        {
            l=strlen(a);
            k=0;
            j=0;
            for(i=0;i<l;i++)
            {
                k=j*10+a[i]-48;
                j=k%11;
            }
        if(j==0)
           printf("%s is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",a);

        }
    }


    return 0;


}
/*
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,s;
char n[1050];
while(1)
{
s=0;
scanf("%s",&n);
i=strlen(n);
for(j=0;j<i;j++)
{
s=s*10+n[j]-'0';
s=s%11;
}
if(s==0 && i==1)    break;
else if(s==0)
printf("%s is a multiple of 11.\n",n);
else printf("%s is not a multiple of 11.\n",n);
}
return 0;
}
*/

