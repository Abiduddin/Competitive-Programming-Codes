#include <stdio.h>
#include <string.h>
#include <ctype.h>




int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
   register int i,j;
   int l;
   char a[200],b[9][5]={{"ABC"},{"DEF"},{"GHI"},{"JKL"},{"MNO"},{"PQRS"},{"TUV"},{"WXYZ"}};

   while(gets(a))
   {
       l=strlen(a);

       for(i=0;i<l;i++)
       {
           if(isalpha(a[i]))
           {
               for(j=0;j<8;j++)
               {
                   if(strchr(b[j],a[i]))
                   {
                       printf("%d",j+2);
                       break;
                   }
               }
           }
           else
            printf("%c",a[i]);
       }
       printf("\n");
   }
   return 0;
}
