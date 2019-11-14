#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,l,k,t,c=0,m,n;
    char a,b,d[500];
    scanf("%d",&t);
    while(t--)
    {
        gets(d);
        l=strlen(d);
        k=0,m=0;
        for(i=0;i<l;i++){
            for(j=i;j<l;j++)
        {
            if(d[i]==d[j])
            {
                k++;
            }
        }
         if(k>m)
         {
             a=d[i];
         }
         else if(k>=m)
        }
    }

}
