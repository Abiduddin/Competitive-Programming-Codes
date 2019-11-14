#include <bits/stdc++.h>
using namespace std;

 unsigned long long a[100005];
int main()
{
    unsigned long long t,i,j,n,max,x,sum;

   scanf("%llu",&t);
   int tm=0;
   while(t--)
   {
       scanf("%llu",&n);
       for(i=0;i<n;i++)
        scanf("%llu",&a[i]);

        sort(a,a+n);
       max=sum=1;

       for(i=0;i<n;i++)
       {
           sum=1;
           for(j=i+1;a[i]==a[j];j++)
           {
               sum++;
           }
           i=j-1;
           if(sum>max)
            max=sum;
       }
       printf("Case %d: %d\n",++tm,max);

   }
}
