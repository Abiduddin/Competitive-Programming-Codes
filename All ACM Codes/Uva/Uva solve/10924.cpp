//#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register int i;
   int j,k,l,m;
   char a[30];

   while(scanf("%s",a)!=EOF)
   {
       //getchar();
       m=1;
       j=0;
       l=strlen(a);
       for(i=0;i<l;i++)
       {
           if(a[i]>='a'&&a[i]<='z')
            j+=(a[i]-96);
           else if(a[i]>='A'&&a[i]<='Z')
            j+=(a[i]-38);

       }
       if(j<1)
        printf("It is not a prime word.\n");

       else if(j<=2)
       printf("It is a prime word.\n");
       else
       {
           for(i=2;i<=(sqrt(j));i++)
            if(j%i==0)
            m=0;



       if(m)
        printf("It is a prime word.\n");
       else
        printf("It is not a prime word.\n");
       }
   }


    return 0;


}

