#include <stdio.h>
#include <bits/stdc++.h>



int check(int a)
{
    int i,j,k,m=1;
    char aa[20];
   if(a<2)
        return 0;
   else if(a==2)
        {
            return 1;
        }
   else
   {
       for(i=2;i<=sqrt(a);i++)
        if(a%i==0)
         return 0;
   }
   sprintf(aa,"%d",a);
   j=strlen(aa);
   for(i=0,k=j-1;i<j/2;i++,k--)
   {
       if(aa[i]!=aa[k])
        m=0;
   }
    if(m)
        return 1;
    else
        return 0;

}

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);

    long int i,j,k,l;

    while(scanf("%ld",&i))
    {

            printf("%ld\n",i*2);
            if(check(i))
                break;
            i=i*2;
            if(check(i))
                break;

    }
    return 0;
}
