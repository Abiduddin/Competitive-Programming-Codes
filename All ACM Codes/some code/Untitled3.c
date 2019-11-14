#include <stdio.h>

int main()
{
    long int i,j,k,h,a,b,c;
    register int d;

    while((scanf("%ld%ld",&i,&j)!=EOF))
          {
              if(i>0&&i<1000000&&j>0&&j<1000000){

              c=0;
              if(i>j)
                {
                    a=j;
                    b=i;
                }
            else
                {
                    a=i;
                    b=j;
                }
                for(d=a;d<=b;d++){
                        k=d;
                        h=0;
                    while(1)
                    {
                        h++;
                        if(k==1)
                            break;
                        else if(k%2==0)
                            k/=2;
                        else {
                            k=(3*k+1);
                        }


                    }
                    if(c<h)
                        c=h;

                }

                printf("%ld %ld %ld\n",i,j,c);
          //}
          }}
    return 0;

}

