#include <stdio.h>

long int odd(long int i);

int main()
{
    //freopen("aa.txt","r",stdin);
    //freopen("aa1.txt","w",stdout);
    register long int i;
    long int a,b,j,k=0,n,d,s;

    while(scanf("%ld%ld",&a,&b)==2){
    k=0;
    if(a<b)
    {
        for(i=a;i<=b;i++)
        {
            j=odd(i);
            if(j>k)
                k=j;
        }
    }
    else
    {
      for(i=b;i<=a;i++)
        {
            j=odd(i);
            if(j>k)
                k=j;
        }
    }

    printf("%ld %ld %ld\n",a,b,k);

    }
    return 0;
}


long int odd(long int i)
{
    long int j;
    if(i==1) return 1;
     if(i%2==0){
                i=i/2;
                j=odd(i)+1;
            }
            else{
                i=i*3+1;
                j=odd(i)+1;
            }
    return j;
}


