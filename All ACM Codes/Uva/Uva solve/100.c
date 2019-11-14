#include <stdio.h>

int main()
{
    register long int i;
    long int a,b,j,k,n,d,s;

    while(scanf("%ld%ld",&a,&b)==2){
    j=0;
    d=a;
    s=b;

    if(a>b){
        s=a;
        d=b;
    }
    for(i=d;i<=s;i++){

        n=1;
        k=i;
        while(k!=1){
            if(k%2==0){
                k=k/2;
                n++;
            }
            else{
                k=k*3+1;
                n++;
            }
        }
    if(j<n){
    j=n;
    }
    }
    printf("%ld %ld %ld\n",a,b,j);

    }
    return 0;
}

/*
#include <stdio.h>

int main()
{
    long int a,b,i,j,k,n,d,s;

    while(scanf("%ld%ld",&a,&b)==2){
    if(a>0&&a<1000000&&b>0&&b<1000000){
    j=0;
    d=a;
    s=b;

    if(a>b){
        s=a;
        d=b;
    }
    for(i=d;i<=s;i++){

        n=1;
        k=i;
        while(k!=1){
            if(k%2==0){
                k=k/2;
                n++;
            }
            else{
                k=k*3+1;
                n++;
            }

        }
    if(j<n){
    j=n;
    }

    }
    printf("%ld %ld %ld\n",a,b,j);
    }
    }
    return 0;
}
*/
